#include <stdio.h>
#define pi 3.1415926535897932384626433832795028841971

int main(void)
{
  float r;
  printf("Introduce radius: ");
  scanf("%f",&r);
  printf("The volume for a sphere of radius %f is: %.10f u^3.\n",r,(4.0f/3.0f)*pi*r*r*r );  
  return 0;
}
