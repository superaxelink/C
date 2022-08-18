#include <stdio.h>
#define MAX 80

int main(void)
{
  char msg[MAX], c;
  int i=0, D , d, s;
  printf("Enter message to be encrypted: ");
  while((c=getchar())!='\n' && i<MAX){
    msg[i++]=c;
  }
  D=i;
  printf("Enter shift ammount (1-25): ");
  scanf("%d",&s);
  while(s<1 || 25<s){
    printf("Out of bounds, enter shift ammount again (1-25): ");
    scanf("%d",&s);
  }
  printf("Encrypted message: ");
  for(i=0;i<D;i++){
    if(isalpha(msg[i])){
      d=toupper(msg[i])-'A' + s;
      if( 25 < d && msg[i] <= 'Z')
        putchar('A' + d-26);
      else if( 25 < d && 'a'<=msg[i])
        putchar('a' + d-26);
      else
        putchar(msg[i] + s);
    }else
      putchar(msg[i]);
  }
  putchar('\n');
  return 1;
}
