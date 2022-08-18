/*Checks if two words are anagrams*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_VALUE 80
#define ALP 26

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
  char word1[MAX_VALUE], word2[MAX_VALUE], c, *p;
  p=word1;
  printf("Enter first word: ");
  while( (c=getchar()) != '\n' && p<word1+MAX_VALUE){
    if (isalpha(c)){
      *p = tolower(c);
      p++;
    }
  }
  p='\0';
  p=word2;
  printf("Enter second word: ");
  while( (c=getchar()) != '\n' && p<word2+MAX_VALUE){
    if (isalpha(c)){
      *p = tolower(c);
      p++;
    }
  }
  p='\0';
  if (are_anagrams(word1,word2)){
    printf("The words are anagrams.\n");
    return 0;
  }
  printf("The words are not anagrams\n");
  return 0;
}
bool are_anagrams(const char *word1, const char *word2)
{
  int comp[26]={0};
  int i=0;

  while(*word1){
    comp[*word1-'a']++;
    word1++;
  }

  while(*word2){
    comp[*word2-'a']--;
    word2++;
  }
  
  for(i=0;i<26;i++){
    if (comp[i] != 0)
      return false;
  }
  return true;
}
