#include <stdio.h>

float f(float x), power(float x, int n);

int main(void)
{
  float x;
  printf("Give me the value of x: ");
  scanf("%f",&x);
  printf("%f %f\n",x,f(x));
}

float f(float x)
{
  float y;
  y= 3*power(x,5)+ 2.0*power(x,4) - 5.0*power(x,3) - power(x,2) + 7.0*x- 6.0;
  return y;
}

float power(float x, int n)
{
  return n==0 ? 1 : x*power(x,n-1);
}
