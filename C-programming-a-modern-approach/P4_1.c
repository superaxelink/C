#include <stdio.h>

int main(void)
{
  int D, m;
  printf("Enter a three-digit number: \n");
  scanf("%d",&D);
  m = D % 100;
  printf("The reversal is: %d%d%d.\n",m % 10, m/10, D/100);
  return 0;
}
