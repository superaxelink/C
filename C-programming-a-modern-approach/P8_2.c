/*Checks numbers for repeated digits*/

#include <stdbool.h> /*C99 only*/
#include <stdio.h>

int main(void)
{
  int digit_seen[10] = {0}, Dig[10] = {0,1,2,3,4,5,6,7,8,9};
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
    printf("Digit:       ");
    for (i=0;i<10;i++)
      printf(" %d",i);
    printf("\n");
    printf("Ocurrences:  ");
    for (i=0;i<10;i++)
        printf(" %d",digit_seen[i]);
    printf("\n");
  } else 
      printf("No repeated digit\n");
  return 0;
}
