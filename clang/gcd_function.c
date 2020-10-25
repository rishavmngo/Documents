#include <stdio.h>

int gcd(int a, int b);

int main(void)
{

    int a,b;

    printf("Enter the number a and b: ");
    scanf("%d%d", &a, &b);

    printf("GCD: %d",gcd(a ,b));



    return 0;
}


