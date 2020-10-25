#include <stdio.h>


int main()
{
    int m, n, gcd, reminder;

    printf("Enter the two integers:");
    scanf("%d%d",&m,&n);

    if ( m < n) 
    {
        m = n;
        n = m;
    }
        
    for (;;)
    {
        if ( m == 0 || n == 0)
        {
            gcd = m + n;
            break;
        }
        
        else
        {
            reminder = m % n;
            m = n;
            n = reminder;
        }
    }

    printf("Greatest common diviosr: %d", gcd);

    return 0;
}

