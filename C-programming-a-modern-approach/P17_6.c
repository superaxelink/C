#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WL 20

int compare_words(const void *w1,const void *w2);

int main(void)
{
  char **words = NULL, *word=NULL; /*we define two pointers, one to store pointers of words and another to store words*/
  int length = 1; /*Inintial length of the pointer*/
  int i, num_words=0;
  if ( ( words = (char **) malloc(sizeof(char *) ) )==NULL ){ /*Check if we could allocate space to store all the words*/
    printf("Error: malloc failed\n");
    exit(EXIT_FAILURE);
  }
  for(i=0; ; i++){ /*loop to get more words*/
    if ( (word=(char *) malloc(sizeof(char *)*(WL+1)))==NULL ){ /*Check if we could allocate space to store a word*/
      printf("Error: malloc failed\n");
      exit(EXIT_FAILURE);
    }
    printf("Enter a word: ");
    fgets(word,WL+1,stdin); /*Copy all characters from stdin w	ith max length WL + terminating character in the word pointer(array)*/
    if(word[strlen(word)-1]=='\n') /*Check if before the terminating character there are a jump line*/
      word[strlen(word)-1] ='\0'; /*replace jump line with terminating character to form string*/
    if(word[0]=='\0') /*If the word is empty then terminate the program*/
      break;
    *(words+i) = word; /*store the first word in the first place of the words pointer*/
    num_words++; /*updates number of words stored*/
    if(length==num_words){ 
      if ((words = (char **) realloc(words,sizeof(char *)*2 ))==NULL ){ /*If maximum word length has reached then allocates more space*/
        printf("Error: malloc failed\n"); /*and checks if the reallocation was possible.*/
        exit(EXIT_FAILURE);
      }
    }
  }
  qsort(words,num_words,sizeof(char *),compare_words);
  printf("\n In sorted order: ");
  for(i=0;i<num_words;i++)
    printf("%s ", *(words+i));
  printf("\n");
}

int compare_words(const void *w1,const void *w2) /*const void because expects any type of pointer but a constant pointer*/
{
  return strcmp(*(char **)w1,*(char **)w2); /*we compare the value stored in each entry of the two pointer pointers*/
}
