#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main(void)
{
  char c, A[MAX]=" ", *i, *j;
  i=A;
  printf("Enter a message: ");
  while ( (c=toupper(getchar())) != '\n')
    *i++ = c;
  j=A;
  i--;
  while (i >= A){
    if (isalpha(*i) ){
      if (isalpha(*j)){
        if (*i==*j){
          i--; 
          j++;
        }else{
          printf("Not a palindrome.\n");
          return 0;
        }
      }else
        j++;
    }else{
      i--;
    }
  }
  printf("Palindrome.\n");
  return 0;
}
