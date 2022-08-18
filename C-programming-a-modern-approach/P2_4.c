#include <stdio.h>
#define TX 1.05

int main(void)
{
  float a;
  printf("Enter an amount (in dollars and cents): ");
  scanf("%f",&a);
  printf("With tax added %.2f.\n",1.05*a);
  return 0;
}

