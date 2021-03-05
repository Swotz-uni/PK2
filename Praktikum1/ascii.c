#include <stdio.h>
int ascii(int s)
{
    int counter = 0;
    for (int i = 32;i<=126;i++)
    {
        count++;
        if(counter%s==0)
            printf("%3d %c\n",i,i);
        else
            printf("%3d %c ",i,i);
    }
}