#include <stdio.h>
#define MAX 81

void reverse(char *name);

int main(void)
{
  char str[MAX];

  printf("Enter a first and last name:" );
  fgets(str, sizeof(str), stdin);
  reverse(str);
  return 0;
}

void reverse(char *name)
{
  char *p=name, initial;
  while (*p == ' ' ){
    p++;
  }
  initial = *p++;

  while ( *p && *p++ != ' ' )
    ;
  while( *p != ' ' && *p != '\n'){
    putchar(*p++);
  }
  printf(", %c.\n",initial);
} 
