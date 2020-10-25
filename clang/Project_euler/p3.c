#include <stdio.h>

#define LIMIT 4000000
int main(void)
{
    long sum = 0, a = 1, b = 2;

    while(b < LIMIT)
    {
        if(b % 2 == 0) sum = sum + b;

        long temp = a;
        a = b;
        b = b + temp;
    }

    printf("%ld\n\n", sum);
    return 0;

}
