#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX 80

bool is_palindrome(const char *message);

int main(void)
{
  char A[MAX];
  printf("Enter a message: ");
  fgets(A,sizeof(A),stdin);
  if(is_palindrome(A))
    printf("Palindrome.\n");
  else
    printf("Not a palindrome.\n");
}

bool is_palindrome(const char *message)
{
  const char *p=message;
  while(*++message!='\0')
    ;
  while (message > p){
    if (isalpha(*message) ){
      if (isalpha(*p)){
        if (toupper(*message)==toupper(*p)){
          message--; 
          p++;
        }else{
          return false;
        }
      }else
        p++;
    }else{
      message--;
    }
  }
  return true;
}
