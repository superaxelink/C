/*Calculates closest departure time*/
#include <stdio.h>

#define M 60
#define total 8

int main(void)
{
  struct T{
    int departure;
    int arriving;
  };
  struct T time[total]={{8*M,10*M+16},{9*M+43,11*M+52},{11*M+19,13*M+31},{12*M+47,15*M},{14*M,16*M+8},{15*M+45,17*M+55},{19*M,21*M+20},{21*M+45,23*M+58}};
  int s, h, m, i, d=0, a=0;
  char id[2]={'a','p'};
  printf("Enter a 24 hour time: ");
  scanf("%d:%d",&h,&m);
  while(23<h || h<0 || m<0 || 59<m){
    printf("Wrong format, try again\n");
    scanf("%d:%d",&h,&m);
  }
  s=M*h + m;
  for(i=0;i<total;i++){
    d=time[i].departure;
    a=time[i].arriving;
    if(s<=d){
      if(d<12*M && a<12*M){
        printf("Closest departure time is %.2d:%.2d %c.m., arriving at %.2d:%.2d %c.m.\n",(d/M)%12,d%M,id[0],(a/M)%12,a%M,id[0]);
        return 1;
      }
      else if(d<12*M && 12*M<=a){
        printf("Closest departure time is %.2d:%.2d %c.m., arriving at %.2d:%.2d %c.m.\n",(d/M)%12,d%M,id[0],(a/M)%12,a%M,id[1]);
        return 1;
      }
      else{
        printf("Closest departure time is %.2d:%.2d %c.m., arriving at %.2d:%.2d %c.m.\n",(d/M)%12,d%M,id[1],(a/M)%12,a%M,id[1]);
        return 1;
      }
    }else if(d<s && i==total-1){
        d=time[0].departure;
        a=time[0].arriving;
        printf("Closest departure time is %.2d:%.2d %c.m., arriving at %.2d:%.2d %c.m.\n",(d/M)%12,d%M,id[0],(a/M)%12,a%M,id[0]);
        return 1;
    }
  }
  return 1;
}
