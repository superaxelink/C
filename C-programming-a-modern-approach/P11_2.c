/*Calculates closest departure time*/
#include <stdio.h>

#define M 60

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
  int desired_time, departure_time, arrival_time, h, m;
  printf("Enter a 24 hour time: ");
  scanf("%d:%d",&h,&m);
  desired_time=M*h + m;
  find_closest_flight(desired_time,&departure_time,&arrival_time);
  if (desired_time<=9*M+43)
    printf("Closest departure time is %02d:%02d a.m., arriving at %02d:%02d a.m.\n",departure_time/60,departure_time % 60,arrival_time/60,arrival_time % 60);
  else if (9*M+43<desired_time && desired_time<=11*M + 19)
    printf("Closest departure time is %02d:%02d a.m., arriving at %02d:%02d p.m.\n",departure_time/60,departure_time % 60,arrival_time/60,arrival_time % 60);
  else if (9*M+43<desired_time && desired_time<=23*M + 59)
    printf("Closest departure time is %02d:%02d p.m., arriving at %02d:%02d p.m.\n",departure_time/60,departure_time % 60,arrival_time/60,arrival_time % 60);
  else
    printf("Wrong format\n");
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
  if (desired_time<=8*M){
    *departure_time = 8*M;
    *arrival_time = 10*M + 16;
  }
  else if (8*M<desired_time && desired_time<=9*M + 43){
    *departure_time = 9*M+43;
    *arrival_time = 11*M + 52;
  }
  else if (9*M+43<desired_time && desired_time<=11*M + 19){
    *departure_time = 11*M+19;
    *arrival_time = 13*M + 31;
  }
  else if (11*M+19<desired_time && desired_time<=12*M + 47){
    *departure_time = 12*M+47;
    *arrival_time = 15*M;
  }	
  else if (12*M+47<desired_time && desired_time<=14*M){
    *departure_time = 14*M;
    *arrival_time = 16*M + 8;
  }
  else if (14*M<desired_time && desired_time<=15*M+45){
    *departure_time = 15*M+45;
    *arrival_time = 17*M + 55;
  }
  else if (15*M+45<desired_time && desired_time<=19*M){
    *departure_time = 19*M;
    *arrival_time = 21*M + 20;
  }
  else if (19*M<desired_time && desired_time<=21*M+45){
    *departure_time = 21*M + 45;
    *arrival_time = 11*M + 58;
  }
}
