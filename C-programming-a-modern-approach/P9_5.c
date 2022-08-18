#include <stdio.h>
#include <stdbool.h>
#define ALP 26

void read_word(int counts[]);
bool equal_array(int counts1[],int counts2[]);

int main(void)
{
  bool c;
  int first[ALP]={0}, second[ALP]={0}, i;

  printf("Enter first word: ");
  read_word(first);
  printf("Enter second word: ");
  read_word(second);
  c=equal_array(first,second);
  if (c)
    printf("The words are anagrams.\n");
  else
    printf("The words are not anagrams.\n");

  return 0;
}

void read_word(int counts[ALP])
{
  char c;
  for (; (c=getchar()) != '\n' ;){
    if (isalpha(c)!=0){
      c = tolower(c);
      ++counts[(int)c - 97];
    }
  }
}

bool equal_array(int counts1[ALP],int counts2[ALP])
{
  int i;
  for (i=0;i<ALP;i++){
    if (counts1[i]==counts2[i] && i<ALP-1)
      continue;
    else if (counts1[i]==counts2[i] && i==ALP-1)
      return true;
    else
      return false;
  }
}
