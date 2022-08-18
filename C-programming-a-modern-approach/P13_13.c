/*Caesar cipher*/
#include <stdio.h>
#define MAX 81

void encrypt(char *message, int shift);

int main(void)
{
  char msg[MAX], c, *p;
  int shift;
  p=msg;
  printf("Enter message to be encrypted: ");
  while((c=getchar())!='\n' && p<msg + MAX-1){
    *p++=c;
  }
  *p++='\0';
  p=msg;
  printf("Enter shift ammount (1-25): ");
  scanf("%d",&shift);
  while(shift<1 || 25<shift){
    printf("Out of bounds, enter shift ammount again (1-25): ");
    scanf("%d",&shift);
  }
  encrypt(p,shift);
  return 1;
}

void encrypt(char *message, int shift)
{
  int d;
  printf("Encrypted message: ");
  for(;*message!='\0';message++){
    if(isalpha(*message)){
      d=toupper(*message)-'A' + shift;
      if( 25 < d && *message <= 'Z')
        putchar('A' + d-26);
      else if( 25 < d && 'a'<=*message)
        putchar('a' + d-26);
      else
        putchar(*message + shift);
    }else
      putchar(*message);
  }
  putchar('\n');
}
