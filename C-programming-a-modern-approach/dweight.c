/*Computes the dimensional weight of 12" x 10" x 8" box */

#include <stdio.h>
#define INCHES_PER_POUND 166 

#define height 8
#define length 12
#define width 10

int main(void)
{
    int volume;
    volume = height*width*length;
    printf("DImensions %dx%dx%d\n",length,width,height);
    printf("Volume (cubic inches): %d\n",volume);
    printf("Dimensional weight (pounds): %d\n",(volume + INCHES_PER_POUND-1)/INCHES_PER_POUND);

    return 0;
}
