#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[])
{
  int i;
 
  for(i=argc-1; 0<i; i--){
    printf("%s ",argv[i]);
  }
  printf("\n");
  return 0;
}
