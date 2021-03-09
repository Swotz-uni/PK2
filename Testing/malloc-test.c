#include <stdlib.h>
#include <stdio.h>
#define CAPACITY 3
int main()
{
    int *x = malloc(CAPACITY*sizeof(int));
    if(x == NULL)
        return EXIT_FAILURE;
    for(int i = 0;i<CAPACITY;i++)
    {
        *(x+i) = 10 + i;
    }

    for(int i = 0;i<CAPACITY;i++)
    {
        printf("%d\n",*(x+i));
    }
    printf("\n\n\n");
    x = realloc(x,CAPACITY*CAPACITY*sizeof(int));

    for(int i = 0;i<CAPACITY*CAPACITY;i++)
    {
        *(x+i) = 10 + i;
    }

    for(int i = 0;i<CAPACITY*CAPACITY;i++)
    {
        printf("%d\n",*(x+i));
    }
    

    free(x);
    return EXIT_SUCCESS;
}