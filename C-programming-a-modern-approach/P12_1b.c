#include <stdio.h>
#define MAX 100

int main(void)
{
  char c, A[MAX]=" ", *i;
  i=A;
  printf("Enter a message: ");
  while ( (c=getchar()) != '\n')
    *i++ = c;
  printf("Reversal is: ");
  while (i >= A)
    printf("%c",*i--);
  printf("\n");
  return 0;
}
