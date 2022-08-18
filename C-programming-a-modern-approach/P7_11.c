#include <stdio.h>

int main()
{
  char initial, c;
  printf("Enter a first and last name:" );
  scanf(" %c",&initial);
  while ( (c=getchar())!=' ' )
    ;
  while ( (c=getchar())==' ' )
    ;

  do{
    putchar(c);
  } while( (c=getchar()) != '\n'&& c != ' ');

  printf(", %c.\n", initial);
  return 0;
}
