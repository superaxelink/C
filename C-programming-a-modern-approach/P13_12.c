/*Reversing a sentence*/
#include <stdio.h>
#define MAXW 30
#define MAXC 21

int main(void)
{
  int j; /*, i;*/
  char c,terminating_char, words[MAXW][MAXC];
  char (*p)[MAXC];

  p=words;
  printf("Enter a sentence: ");

  for(p=words; p < words + MAXW; p++){ /*con operadores*/
/*  for(i = 0; i < MAXW; i++){*/ /*sin operadores*/ 
    for(j=0; (c = getchar()) != '\n' && j<MAXC-1; j++){
      if(c != ' ' && c != '.' && c != '!' && c != '?' ){
        (*p)[j]=c;
        /*words[i][j] = c;*/
      }
      else if(c==' '){
        (*p)[j]='\0';
        /*words[i][j] = '\0';*/
        break;
      }else if (c == '.' || c == '!' || c == '?'){
        (*p)[j]='\0';
        /*words[i][j] = '\0';*/
        terminating_char = c;
        break;
      }
    }
/*    printf("%c\n",(*(p+1))[0]);*/
    if (c == '.' || c == '!' || c == '?')
      break;
  }
  
  printf("Reversal of sentence: ");
  while(p>=words){
/*  while (i >= 0) {*/
    j=0;
    while( (*p)[j] != '\0' ){
      putchar((*p)[j]);
/*    while (words[i][j] != '\0'){
      putchar(words[i][j]);*/
      j++;
    }
    if(p>=words)
      putchar(' ');
    p--;
/*    if (i >= 0)
      putchar(' ');
    i--;*/
  }
  printf("\b%c\n", terminating_char);
  return 0;
}
