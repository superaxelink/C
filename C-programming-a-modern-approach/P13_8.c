#include <stdio.h>
#define MAX 20

int compute_scrabble_value(const char *word);

int main()
{
  char str[MAX], *word;
  int total;
  word=str;
  printf("Enter a word: ");
  scanf("%s",word);
  total=compute_scrabble_value(word);
  printf("Scrabble value: %d\n",total);
  return 0;
}

int compute_scrabble_value(const char *word)
{
  int total;
  char c;
  for(;*word!='\0';word++){
    c=toupper(*word);
    if(c=='A' || c=='E' || c=='I' || c=='L' || c=='N' || c=='O' || c=='R' || c=='S' || c=='T' || c=='U')
      total++;
    else if(c=='D' || c=='G')
      total+=2;
    else if(c=='B' || c=='C' || c=='M' || c=='P' )
      total+=3;
    else if(c=='F' || c=='H' || c=='V' || c=='W' || c=='Y' )
      total+=4;
    else if(c=='K')
      total+=5;
    else if(c=='J' || c=='X')
      total+=8;
    else if(c=='Q' || c=='Z')
      total+=10;
    else
      printf("%c is a non supported character\n",*word);
  }
  return total;
}

