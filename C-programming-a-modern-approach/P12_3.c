#include <stdio.h>
#define MAX 100

int main(void)
{
  char A[MAX]=" ";
  char c, *p=A;
  printf("Enter a message: ");
  while ( (c=getchar()) != '\n' && p < A + MAX)
    *p++ = c;
  printf("Reversal is: ");
  while (p >= A)
    putchar(*p--);
  printf("\n");
  return 0;
}
