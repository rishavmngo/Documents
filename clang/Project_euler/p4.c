#include <stdio.h>

int main(void)
{
    long product = 0, a = 999, palindrom = 0;

    int clear = 100;
    int ray[10];

    while(a > 99)
    {
        long b = 999;
        while(b > 99)
        {
            int i = 0;
            product = a * b;

            long temp = product;
            while (product > 0)
            { 
                ray[i++] = product % 10;
                product = product / 10;
            }

            i--;
            int count = 0;
            for(int t = i  , k = 0; k <= i; k++, t--)
            { 
                if(ray[k] != ray[t]) break;

                else
                    count++;
            }

            if(count == (i + 1))
            {
                if (temp > palindrom)
                {
                    palindrom = temp;
                }
            }
            b--;
        }
        a--;
    }

    printf("%ld", palindrom);
    return 0;

}
