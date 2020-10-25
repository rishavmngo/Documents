#include <stdio.h>

int main(void)
{
    long a = 0,b = 1,sum = 0;

    while(b < 4000000)
    {

        if (b % 2 == 0)
            sum = sum + a;

        long temp = a;
        a = b;
        b = (temp + b);
    } 
      printf("%ld\n\n", sum);


      return 0; 
}
