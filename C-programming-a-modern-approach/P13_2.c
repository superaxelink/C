/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60 /* max length of reminder message */

int read_line(char str[], int n);

int main(void)
{
  char reminders[MAX_REMIND][MSG_LEN+3];
  char day_str[16], msg_str[MSG_LEN+1];
  int day, month, hour=-1, min=-1,i, j, num_remind=0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }
    printf("Enter reminder in format 'month/day hour:minutes message': ");
    scanf(" %d/%d",&month,&day);
    if (day == 0 || month==0)
      break;
    else if (day<0 || day>31 || month<0 || month>12){
      printf("Day or month out of bounds\n");
      while(getchar()!='\n')
        ;
      continue;
    }
    scanf(" %d: %d",&hour,&min);
    if (hour < 0 || hour > 12 || min <0 || min > 60){
      printf("hours or minutes out of bounds\n");
      while(getchar()!='\n')
        ;
      continue;
    }
    sprintf(day_str, "%4.2d %3.2d %3.2d:%.2d", month, day, hour, min);
    read_line(msg_str,MSG_LEN);
    for (i=0; i<num_remind; i++)
      if (strcmp(day_str,reminders[i]) < 0)
        break;
    for (j=num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j-1]);

    strcpy(reminders[i],day_str);
    strcat(reminders[i],msg_str);

    num_remind++;
  }
  
  printf("\nMonth Day Time  Reminder\n");
  for (i=0;i<num_remind;i++)
    printf("%s\n",reminders[i]);

  return 0;  
}

int read_line(char str[], int n)
{
  int ch, i=0;
  
  while ((ch = getchar()) != '\n')
    if (i<n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
