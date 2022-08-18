/*Reverse Polish Notation (RPN) calculator */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

int stk[STACK_SIZE]={0};
int top=0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
  char c,st1,st2;

  while(true){
  
    printf("Enter an RPN expression: ");
    while( (c=getchar())!='\n' ){
      if(isdigit(c))
        push(c-'0');
      else{
        switch(c){
          case '+': push(pop() + pop());  
                    break;  
          case '-': st2 = pop();
                    st1 = pop();
                    push(st1-st2);
                    break;
          case '*': push(pop()*pop());
                    break;
          case '/': st2=pop();
                    st1=pop();
                    push(st1/st2);
                    break;
          case '=': printf("Value of expresion: %d\n",pop());
                    break;
          case ' ': break;
          default : exit(EXIT_FAILURE);
        }
      }
    }
  }
}

void make_empty(void)
{
  top=0;
}

bool is_empty(void)
{
  return top==0;
}

bool is_full(void)
{
  return top==STACK_SIZE;
}

void push(char i)
{
  if(is_full())
    stack_overflow();
  else
    stk[top++] = i;
}

char pop(void)
{
  if(is_empty())
    stack_underflow;
  else
    return stk[--top];
}

void stack_overflow(void)
{
  printf("Expression is too complex");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  printf("Not enough operands in expression");
  exit(EXIT_FAILURE);
}
