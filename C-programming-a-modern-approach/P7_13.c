#include <stdio.h>
#define MAX 100

int main(void)
{
  char c;
  int l=0;
  double N=1.0;
  printf("Enter a sentence: ");
  while( (c=getchar()) != '\n' ){
    if(c == ' ')
      N++;
    else
      l++;
  }
  printf("Average word length: %.1f\n",l/N);
  return 0;
}
