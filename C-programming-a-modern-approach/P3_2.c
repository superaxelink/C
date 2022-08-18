#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
  int item, month, day, year;
  float price;
  printf("Enter item number: ");
  scanf("%d",&item);
  printf("Enter unit price: ");
  scanf("%f",&price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d",&month,&day,&year);

  printf("Item		Unit		Purchase\n");
  printf("		Price		Date\n");
  printf("%-4d		$%7.2f	%2d/%2d/%4d\n", item, price, month, day, year);

  return 0;
}
