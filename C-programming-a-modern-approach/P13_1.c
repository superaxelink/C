#include <stdio.h>
#include <string.h>

#define WORDLEN 20

char smallest_word[WORDLEN + 1], largest_word[WORDLEN + 1], word[WORDLEN + 1];

void get_first_word(void);
void get_another_word(void);
void get_word(void);

int count(char str[]);

int main(void) {

    get_first_word();

    while (strlen(word) != 4)
        get_another_word();

    printf("\nSmallest word: %s\nLargest word: %s\n", 
           smallest_word, largest_word);
    
    return 0;
}

void get_first_word(void) {

    get_word();
    strcpy(smallest_word, word);
    strcpy(largest_word, word);
}

void get_word(void) {

    printf("Enter word: ");
    scanf("%20s", word);
}

void get_another_word(void) {

    get_word();
    if (strcmp(word, smallest_word) < 0)
        strcpy(smallest_word, word);
    else if (strcmp(word, largest_word) > 0)
        strcpy(largest_word, word);
}

/*Count number of characters in a string*/
int count(char str[])
{
  int i=0;
  char *j;
  for (j=str; *j != '\0'; j++ ){
    i++;
  }
  return i;
}

/*
  while(j!=4){
    printf("Enter word: ");
    scanf("%s",dummy);
    j=strlen(dummy);
    printf("%d",j);
    if(j<=i && j != 4){
      if (k==0){
        strcpy(largest_word,smallest_word);
        strcpy(smallest_word,dummy);
        i=strlen(smallest_word);
        k=strlen(largest_word);
      }else{
        strcpy(smallest_word,dummy);
        i=j; 
      }
    }else if(j>=k && j != 4 ){
      strcpy(largest_word,dummy);
      k=count(largest_word);
    }
  }
  s=smallest_word;
  l=largest_word;
  while (*s != '\0'){
    if ( tolower(*s) < tolower(*l) ){
      printf("Smallest word: %s\n",smallest_word);
      printf("Largest word: %s\n",largest_word);
      break;
    }else if(tolower(*s) > tolower(*l) ){
      printf("Largest word: %s\n",largest_word);
      printf("Smallest word: %s\n",smallest_word);
      break;
    }else{
      s++;
    }
  }
*/
