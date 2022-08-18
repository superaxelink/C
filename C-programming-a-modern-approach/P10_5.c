/*Classifies poker hand*/

#include <stdbool.h> /*C99 only*/
#include <stdio.h>
#include <stdlib.h>

#define RANK 5
#define SUIT 2

/*external variables*/
bool royal, straight, flush, ace_low, four, three;
int pairs; /*can be 0, 1 or 2*/

/*prototypes*/
void read_cards(int num[][SUIT]);
void analyze_hand(int num[][SUIT]);
void selection_sort(int num[][SUIT],int m);
void print_result(void);

/********************************************************
* main: Calls read_cards, analyze_hand and print_result *
*       repeatedly.                                     *
*********************************************************/
int main(void)
{
  int num[RANK][SUIT];
  for (;;) { 
    read_cards(num);
    analyze_hand(num);
    print_result();
  }
}

/********************************************************
* read_cards: Reads the cards into the external         *
*             variables num_in_rank and num_in_suit;    *
*             checks for bad cards and duplicate cards. *
*********************************************************/
void read_cards(int num[][SUIT])
{
  char ch, rank_ch, suit_ch;
  int k, rank, suit;
  bool bad_card,dupli;
  int cards_read=0;

  for (rank=0; rank<RANK; rank++) {
    num[rank][0] = 0;
    num[rank][1] = 0;
  }

  while (cards_read<RANK) {
    bad_card=false;

    printf("Enter a card: ");
    rank_ch = getchar();
    switch (rank_ch) { 
      case '0':            exit(EXIT_SUCCESS);
      case '2':            rank = 1; break;
      case '3':            rank = 2; break;
      case '4':            rank = 3; break;
      case '5':            rank = 4; break;
      case '6':            rank = 5; break;
      case '7':            rank = 6; break;
      case '8':            rank = 7; break; 
      case '9':            rank = 8; break; 
      case 't': case 'T' : rank = 9; break;
      case 'j': case 'J' : rank = 10; break;
      case 'q': case 'Q' : rank = 11; break;
      case 'k': case 'K' : rank = 12; break;
      case 'a': case 'A' : rank = 13; break;
      default:             bad_card = true;
    }
    suit_ch = getchar();
    switch (suit_ch) {
      case 'c': case 'C' : suit = 1; break;
      case 'd': case 'D' : suit = 2; break;
      case 'h': case 'H' : suit = 3; break;
      case 's': case 'S' : suit = 4; break;
      default:             bad_card = true; 
    }

    while ((ch=getchar()) != '\n')
      if (ch != ' ') bad_card = true;
   
    dupli=false;
    for(k=0;k<=cards_read;k++){
      if(rank==num[k][0] && suit==num[k][1])
        dupli=true;
    }

    if(bad_card)
      printf("Bad card; ignored.\n");
    else if(dupli)
      printf("Duplicate card; ignored.\n");
    else{
      num[cards_read][0]=rank;
      num[cards_read][1]=suit;
      cards_read++;        
    }  
  }
}

/*********************************************************
* analyze_hand: Determines wether the hand contains a    *
*               straight, a flush, four-of-a-kind,       *
*               and/or three-of-a-kind; determines the   *
*               number of pairs; stores the results into *
*               the external variables straight, flush,  *
*               four, three, and pairs.                  *              
**********************************************************/

void analyze_hand(int num[][SUIT])
{
  int i,k,d,hash,m;
  
  royal=false;
  ace_low=false;
  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;

  /*sorts the cards*/
  m=RANK;
  selection_sort(num,m);

  /* check for a flush */
  for (i = 0; i < RANK; i++ ){
    if (num[0][1] == num[i][1])
      flush = true;
    else{
      flush = false;
      break;
    }
  }
      
  /* check for straight or ace low*/
  for(i=0;i<RANK-1;i++){
    if((num[i+1][0]-num[i][0])==1)
      straight=true;
    else if(i==RANK-2 && (num[i+1][0]-num[i][0])==9 && num[0][0]==1 ){
      straight=false;
      ace_low=true;
    }
    else{
      straight=false;
      break;
    }
  }

  /*Check for royal*/
  if(num[RANK-1][0]-num[0][0]== 4 && num[0][0]==9 )
    royal=true;

  /*check for 4-of-a-kind, 3-of-a-kind, and pairs*/
  hash=1;
  for (i = 0; i < RANK; i++) {
    for(k=i+1;k<RANK;k++){
      if (num[i][0]==num[k][0]){
        hash++;
      }
    }
    if(hash==3){
      three=true;
      i=hash-1;
      hash=1;
    }
    else if(hash==4){
      four=true;
      break;
    }
    else if(hash==2){
      if (pairs==2)
        break;
      else{
        pairs++;
        hash=1;
      }
    }
  }
}

/*********************************************************
* print_result: Prints the classification of the hand,   *
*               based on the values of the external      *
*               variables straight, flush, four, three,  *
*               and pairs                                *              
**********************************************************/

void print_result(void)
{
  if (royal && flush)    printf("Royal flush");
  else if (straight && 
          flush)         printf("Straight flush");
  else if (ace_low)      printf("Ace low");
  else if (four)         printf("Four of a kind");
  else if (three &&
          pairs ==1)     printf("Full house");
  else if (flush)        printf("Flush");
  else if (straight)     printf("Straight");
  else if (three)        printf("Three of a kind");
  else if (pairs == 2)   printf("Two pairs");
  else if (pairs == 1)   printf("Pair");
  else                   printf("High card");

  printf("\n\n");
} 

void selection_sort(int a[][SUIT], int m)
{
  int dj, da, sw, i, j;
  int ds[SUIT]={0};
  da=0;
  for (j=0;j<m;j++){
    if(da<a[j][0]){
      da=a[j][0];
      dj=j;
    }
  }
  for(i=0;i<SUIT;i++){
    ds[i]=a[m-1][i];
    a[m-1][i] = a[dj][i];
    a[dj][i] = ds[i];
  }
  if (m>2)
    selection_sort(a,--m);
}
















