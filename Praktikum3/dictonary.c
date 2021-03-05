#define CAPACITY 2
typedef struct dict_entry{
    int value;
    enum flag
    {
        free,
        deleted
    };
} dict_entry;

typedef struct dict{
    
    enum flag
    {
        free,
        deleted
    };
} dict;

dict dictonary[CAPACITY];

int insert(int i)
{
    int pos = i % CAPACITY;
    //if(dictonary[pos]-> free)

}