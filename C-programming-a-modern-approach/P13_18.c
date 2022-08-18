#include <stdio.h>

int main(void)
{
  int d, m, y;
  char *p[12]={"January","February","March","April","May","June", "July", "August", "September", "October", "November", "December"};
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d",&d,&m,&y);
  printf("You entered the date %s %2d, %4d\n",p[d-1],m,y);
}
