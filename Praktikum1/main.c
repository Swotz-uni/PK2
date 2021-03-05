#include<stdio.h>
#include"ggt.h"
#include "ascii.h"
int main()
{
    printf("GGT von 9 und 21 ist %d\n",ggt(9,21));
    printf("GGT von 27 und 9 ist %d\n",ggt(27,9));

    ascii(10);
    return 0;
}