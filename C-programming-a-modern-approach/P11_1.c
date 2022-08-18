/*Pay a dollar amount with 20, 10, 5 and 1 bills*/
#include <stdio.h>

void pay_ammount(int dollars, int *twenties,int *tens, int *fives, int *ones );

int main(void)
{
  int dollars, twenties, tens, fives, ones;
  printf("Enter a dollar amount: ");
  scanf("%d",&dollars);
  pay_ammount(dollars, &twenties, &tens, &fives, &ones);
  printf("$20 bills: %d.\n", twenties);
  printf("$10 bills: %d.\n", tens);
  printf("$5 bills: %d.\n", fives);
  printf("$1 bills: %d.\n",ones);
  return 0;
}

void pay_ammount(int dollars, int *twenties,int *tens, int *fives, int *ones )
{
  *twenties = dollars/20;
  dollars = dollars % 20;
  *tens = dollars/10;
  dollars = dollars % 10;
  *fives = dollars/5;
  dollars = dollars % 5;
  *ones = dollars/1;
}
