#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
  int numerator, reduced_numerator, denominator, reduced_denominator;

  printf("Enter a fraction: ");
  scanf("%d/%d",&numerator,&denominator);
  reduce(numerator,denominator,&numerator,&denominator);
  printf("In lowest terms %d/%d.\n",numerator,denominator);
  return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
  int a1,b1, t, c, GCD;
 
  a1=numerator;
  b1=denominator;
  if (b1<a1){
    t = a1;
    a1 = b1;
    b1 = t;
  }

  if (a1 != 0){
    c = b1 % a1;
    while (c != 0){
      b1 = a1;
      a1 = c;
      c = b1 % a1;
    }
    GCD=a1;
  } else{
    GCD=b1;
  }
  *reduced_numerator = numerator/GCD;
  *reduced_denominator = denominator/GCD;
}


