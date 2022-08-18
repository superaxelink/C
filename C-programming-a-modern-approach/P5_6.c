/*Orders four numbers*/
#include <stdio.h>

int main(void)
{
  int a1, a2, a3, a4, t;  
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
  t=0;
  if (a1>a2){
    t=a1; 
    a1=a2;
    a2=t; 
  }
  if (a3>a4){
    t=a3; 
    a3=a4;
    a4=t;
  }
  if (a1>a3){
    t=a1; 
    a1=a3;
    a3=t;    
  }
  if (a2>a4){
    t=a2; 
    a2=a4;
    a4=t;
  }
  printf("%d %d %d %d\n",a1,a2,a3,a4); 
  printf("Largest: %d. \n",a4);
  printf("Smallest: %d. \n",a1);
  
  return 0;
}
