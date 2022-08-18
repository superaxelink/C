#include <stdio.h>

int main(void)
{
  int a, b, t, c;
  
  printf("Enter two integers: ");
  scanf("%d %d",&a,&b);
  
  if (b<a){
    t = a;
    a = b;
    b = t;
  }
  if (a != 0){
    c = b % a;
    while (c != 0){
      b = a;
      a = c;
      c = b % a;
    }
    printf("Greatest common divisor: %d\n",a);
  } else{
    printf("Greatest common divisor: %d\n",b);
  }
  return 0;
}
