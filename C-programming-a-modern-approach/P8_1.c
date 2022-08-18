/*Checks numbers for repeated digits*/

#include <stdbool.h> /*C99 only*/
#include <stdio.h>

int main(void)
{
  int digit_seen[10] = {0};
  int digit, i, d;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);
  d=0;
  while (n>0) {
    digit = n%10;
    digit_seen[digit] += 1;
    if (digit_seen[digit]>1)
      d=1;
    n /= 10;
  }
  if (d != 0){
    printf("Repeated digit: ");
    for (i=0;i<10;i++){
      if (digit_seen[i] > 1)
        printf(" %d",i);
    }
    printf("\n");
  } else 
      printf("No repeated digit\n");
  return 0;
}
