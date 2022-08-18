#include <stdio.h>
/*Proofs*/
int height;
int length;
int width;
int volume; /*total volume*/	
float profit, loss;

int main(void)
{
    height=8;
    length=12;
    width=10;
    volume=height*length*width;

    printf("Height: %d\n",height);

    profit= 2150.48f; /*preferible to write f on a float number to avoid compiler warnings*/

    printf("Profit: $%.2f\n",profit); /*notice at the format to print floats*/

    printf("Height: %d Length: %d Profit: $%.2f\n",height,length, profit);


    printf("To C or not to C: That's the question.\n");
    return 0;
}
