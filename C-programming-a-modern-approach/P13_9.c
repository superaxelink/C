#include <stdio.h>
#define MAX 80

int compute_vowel_count(const char *str);

int main(){
  char str[MAX];
  char c, *p=str;
  printf("Enter a sentence: ");
  while ((c=toupper(getchar()) )!='\n' && p < str + MAX)
    *p++=c;
  printf("Your sentence contains %d vowels.\n",compute_vowel_count(str));
}

int compute_vowel_count(const char *str)
{
  int total;
  char c;
  for(;*str!='\0';str++){
    c=toupper(*str);
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
      total++;
  }
  return total;
}
