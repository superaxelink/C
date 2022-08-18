#include <stdio.h>

int main(void)
{
  int i, j, k;
  i=7; j=8;
  i*=j+1;
  printf("a) %d %d.\n",i,j);

  i=j=k=1;
  i+=j+=k;
  printf("b) %d %d %d.\n",i,j,k );

  i=1; j=2, k=3;
  i -= j -= k;
  printf("c) %d %d %d.\n",i,j,k);

  i=2; j=1; k=0;
  i *= j *= k;
  printf("d) %d %d %d.\n",i,j,k);

  i=6;
  j = i += i;
  printf("a) %d %d.\n",i,j);

  i=5; 
  j= (i=-2) + 1;
  printf("b) %d %d.\n",i,j);

  i=7;
  j= 6 + (i=2.5);
  printf("c) %d %d.\n",i,j);

/*  i=2; j=8;
  j = (i=6) + (j=3);
  printf("d) %d %d.\n",i,j);*/

  i=1;
  printf("a) %d.\n",i++ - 1);
  printf("a) %d.\n",i);
  
  i=10; j=5;
  printf("b) %d .\n",i++ - ++j);
  printf("b) %d %d.\n", i, j);

  i=7; j=8;
  printf("c) %d .\n", i++ - --j);
  printf("c) %d %d.\n", i, j);

  i=3; j=4; k=5;
  printf("d) %d.\n",i++ - j++ + --k);
  printf("d) %d %d %d.\n",i,j,k);

  i= 5;
  j= ++i * 3 - 2;
  printf("a) %d %d.\n",i,j);

  i=5;
  j= 3 - 2 * i++;
  printf("b) %d %d.\n",i,j);

  i=7;
  j=3 * i-- + 2;
  printf("c) %d %d.\n", i, j);

  i=7;
  j = 3 + --i * 2;
  printf("d) %d %d.\n", i, j); 
  
  return 0;
}
