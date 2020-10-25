#include <stdio.h>


int main(void)
{

    int a = 36, b = 0;

    while(1)
    {
        if(a == 0)
        {
            printf("GCD: %d", b);
            return 0;
        }

        int temp = a;
        a = b % a;
        b = temp;
    }
    return 0;
}


