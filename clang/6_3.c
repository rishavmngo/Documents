
#include <stdio.h>


int main()
{
    int m, n, gcd, reminder;

    printf("Enter a fraction: ");
    scanf("%d/%d",&m,&n);

       do 
       {
           remainder = m % n;
           m = n;
           n = remainder;
       } while (n != 0);
       
       prinf("Greatest common divisor: %d", m);
          
    return 0;
}

