#include <stdio.h>

int main(void)
{

    int a = 5, b = 7, c = 8, d = 9, l = 0;

    if(a > b)
    {
        if(a > c)
        {
            if(a > d)
                l = a;
            else
                l = d;
        }
        else
        {
            if(c > d)
                l = c;
            else
                l = d;
        }
    }
    else
    {
        if(b > c)
        {
            if(b > d)
                l = b;
            else
                l = d;
        }
        else
        {
            if(c > d)
                l = c;
            else
                l = d;
        }
    }

    printf("l = %d", l);
    return 0;
}


