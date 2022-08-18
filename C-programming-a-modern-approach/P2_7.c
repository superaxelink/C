/*Pay a dollar amount with 20, 10, 5 and 1 bills*/
#include <stdio.h>

int main(void)
{
  int a;
  printf("Enter a dollar amount: ");
  scanf("%d",&a);
  printf("$20 bills: %d.\n", a/20);
  a = a % 20;
  printf("$10 bills: %d.\n", a/10);
  a = a % 10;
  printf("$5 bills: %d.\n", a/5);
  a = a % 5;
  printf("$1 bills: %d.\n",a/1);
  return 0;
}
