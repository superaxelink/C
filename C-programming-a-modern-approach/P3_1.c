#include <stdio.h>

int main(void)
{
  int m, d, a;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%2d/%2d/%4d",&m,&d,&a);
  printf("You entered the date %04d%02d%02d.\n",a,m,d);
  return 0;
}
