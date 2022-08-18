#include <stdio.h>

int main(){
  char c;
  int total;
  printf("Enter a sentence: ");
  while ((c=toupper(getchar()) )!='\n')
  {
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
      total++;
  }
  printf("Your sentence contains %d vowels.\n",total);
}
