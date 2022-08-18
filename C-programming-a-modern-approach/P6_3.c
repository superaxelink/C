#include <stdio.h>

int main(void)
{
  int a, a1, b, b1, t, c, GCD;

  printf("Enter a fraction: ");
  scanf("%d/%d",&a,&b);
  a1=a;
  b1=b;
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
    GCD=a;
  } else{
    GCD=b;
  }
}


