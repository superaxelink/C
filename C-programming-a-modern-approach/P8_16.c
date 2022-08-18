/*Checks if two words are anagrams*/
#include <stdio.h>
#define MAX_VALUE 100 
#define ALP 26

int main(void)
{
  char first[MAX_VALUE], second[MAX_VALUE], c;
  int comp[ALP]={0}, i;

  printf("Enter first word: ");
  for (i=0; (c=getchar()) != '\n' && i<MAX_VALUE; i++ ){
    if (isalpha(c)!=0)
      first[i] = tolower(c);
    else
      --i;
  }
  printf("Enter second word: ");
  for (i=0; (c=getchar()) != '\n' && i<MAX_VALUE; i++ ){
    if (isalpha(c)!=0)
      second[i] = tolower(c);
    else
      --i;
  }
  for (i=0;i<MAX_VALUE; i++){
    if (first[i]!=0)
      ++comp[(int)first[i] - 97];
    else
      break;
  }
  for (i=0;i<MAX_VALUE; i++){
    if (second[i]!=0)
      --comp[(int)second[i] - 97];
    else
      break;
  }

  for (i=0;i<ALP;i++){
    if (comp[i] == 0 && i<ALP-1){
      continue;
    }
    else if (comp[i]==0 && i ==ALP-1){
      printf("The words are anagrams.\n");
      continue;
    }
    else
      printf("The words are not anagrams\n");
      break;
  }
}

