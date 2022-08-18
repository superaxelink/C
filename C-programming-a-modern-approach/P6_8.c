#include <stdio.h>
int main(void)
{
  int n, d, i, j;
  printf("Enter number of days in month: ");
  scanf("%d",&n);
  printf("Enter starting day of the week (1=Sun, 7= Sat): ");
  scanf("%d",&d);
  j=1;
  for (i=1; i<n+d; i++){
    if (j == 8){
      printf("\n");
      j=1;
    }
    if (i<d)
      printf("   ");
    else
      printf("%2d ",i+1-d);
    j++;  
  }
  while (j<7){
    printf("   ");
    j++;
  }
  printf("\n");
  return 0;
}
