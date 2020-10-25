#include <stdio.h>


int main()
{
    int a = 5, *b = &a, *i = &a;

    if(*b == *i)
        printf(" a : %d\n b : %d\n", *b, *i);

}

    
    
