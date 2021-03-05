#define CAPACITY 2
int speichern = 0;
int abrufen = 0;
int array[CAPACITY];
int full = 0;
int enqueue(int i)
{
    int a = (speichern+1);
    if(a == CAPACITY)
    {
        a = 0;
    }
    if(a==abrufen)
    {
        array[speichern] = i;
        full = 1;
    }
    else
    {
        array[speichern] = i;
        speichern = a;
    }
    return 1;
}

int dequeue()
{
    if(abrufen == speichern)
    {
        return -1;
    }
    else
    {
        int a = array[abrufen];
        array[abrufen] = 0;
        int b = abrufen+1;
        if(b == CAPACITY)
        {
            b = 0;
        }
        abrufen = b;
        if(full == 1)
        {
            if(abrufen == speichern)
            {
                int d = speichern +1;
            
                if(d == CAPACITY)
                {
                    d = 0;
                }
                speichern = d;
            }
            full = 0;
        }
        return a;
    }
    return -2;
}