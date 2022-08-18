#include <stdio.h>
#define MAX 80

void reverse(char *message);

int main(void)
{
  char A[MAX];
  printf("Enter a message: ");
  fgets(A,sizeof(A),stdin);
  printf("Reversal is: ");
  reverse(A);
  return 0;
}

void reverse(char *message)
{
  char *p=message;
  while(*++message != '\n')
    ;
  while (message-->p)
    printf("%c",*message);
  printf("\n");
}
