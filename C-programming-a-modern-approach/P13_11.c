#include <stdio.h>
#define MAX 100

double compute_average_word_length(const char *sentence);

int main(void)
{
  char str[MAX], *p;
  p=str;
  printf("Enter a sentence: ");
  fgets(p, sizeof(str), stdin);
  compute_average_word_length(p);
  return 0;
}

double compute_average_word_length(const char *sentence)
{
  double N=1.0;
  int l=0;
  while(*sentence != '\n'){
    if(*sentence == ' '){
      N++;
      sentence++;
    }else{
      l++;
      sentence++;
    }
  }
  printf("Average word length: %.1f.\n",l/N);
}

