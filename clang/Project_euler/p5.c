#include <stdio.h>

#define N 20 

int main(void)
{
    int l;

    for(long num = 1;;num++)
    {
        printf("%d\n", num);
        for(int i = 1, count = 0; i <= N; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
            if(count == N)
            {
                printf("%ld", num);
                return 0;
            }
        }
    }


}


