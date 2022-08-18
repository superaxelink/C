#include <stdio.h>
#define MAX 100

int main(void)
{
  int i=0;
  char c, A[MAX]="\n";
  printf("Enter a message: ");
  while ( (c=getchar()) != '\n')
    A[i++] = c;
  printf("Reversal is: ");
  while (i >= 0)
    printf("%c",A[i--]);
  printf("\n");
  return 0;
}
