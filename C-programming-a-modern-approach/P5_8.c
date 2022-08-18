/*Calculates closest departure time*/
#include <stdio.h>

#define M 60

int main(void)
{
  int s, h, m;
  printf("Enter a 24 hour time: ");
  scanf("%d:%d",&h,&m);
  s=M*h + m;
  if (s<=8*M)
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
  else if (8*M<s && s<=9*M + 43)
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
  else if (9*M+43<s && s<=11*M + 19)
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
  else if (11*M+19<s && s<=12*M + 47)	
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
  else if (12*M+47<s && s<=14*M)
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
  else if (14*M<s && s<=15*M+45)
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
  else if (15*M+45<s && s<=19*M)
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
  else if (19*M<s && s<=21*M+45)
    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
  else
    printf("Wrong format\n");
    
}
