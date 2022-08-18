/*Random Walk */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  char s[10][10], d;
  int i, j, m, a;
  int A[4]={0};

  for (i=0;i<10;i++){
    for (j=0;j<10;j++){
      s[i][j]='.';
    }
  }
  i=0;
  j=0; 
  d='A';
  s[i][j]=d;
  srand(time(NULL));
  a=1;
  while (a){ 
    if (d < 'Z'){
      m = rand() % 4 ;
      if (A[0] == 0 || A[1] == 0 || A[2] == 0 || A[3] == 0 ){        
        switch (m) {
          case 0:
            if (A[0] == 0){
              i -= 1;
              if (0<=i && i<10){
                if (s[i][j] == '.'){
                  d += 1;
                  s[i][j] = d ;
                  A[0]=A[1]=A[2]=A[3] = 0;
                  break;
                } else {
                  i += 1;
                  A[0] = 1;	
                  break;
                }
              } else{
                i += 1;
                A[0] = 1;
                break;
              }                
            } 
            break;
          case 1:
            if (A[1] == 0){
              i += 1;
              if (0<=i && i<10){
                if (s[i][j] == '.'){
                  d += 1;
                  s[i][j] = d ;
                  A[0]=A[1]=A[2]=A[3] = 0;
                  break;
                } else {	
                  i -= 1;
                  A[1] =1;
                  break;
                }
              } else{
                i -= 1;
                A[1]=1;
                break;
              }                
            } 
            break; 
      
          case 2:
            if (A[2] == 0){
              j += 1;
              if (0<=j && j<10){
                if (s[i][j] == '.'){
                  d += 1;
                  s[i][j] = d ;
                  A[0]=A[1]=A[2]=A[3] = 0;
                  break;
                } else {	
                  j -= 1;
                  A[2]=1;
                  break;
                }
              } else{
                j -= 1;
                A[2]=1;
                break;
              }                
            }
            break;

          case 3:
            if (A[3] == 0){
              j -= 1;
              if (0<=j && j<10){
                if (s[i][j] == '.'){
                  d += 1;
                  s[i][j] = d ;
                  A[0]=A[1]=A[2]=A[3] = 0;
                  break;
                } else {	
                  j += 1;
                  A[3]=1;
                  break;
                }
              } else{
                j += 1;
                A[3]=1;
                break;
              }                
            }
          break;
        }
      } else{
        a = 0;
      }
    } else{
      a = 0;
    } 
  }

  for (i=0;i<10;i++){
    for (j=0;j<10;j++){
      printf("%c ",s[i][j]);
    }
    printf("\n");
  }

  return 0;
}
