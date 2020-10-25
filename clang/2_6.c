#include <stdio.h>

int main()
{
    float x;

    printf("Enter the value of x: ");
    scanf("%f",&x);

    x = 3 * (x*x*x*x*x) + 2 * (x*x*x*x) - (x * x) + 7 * x - 6;

    printf("%f",x);

    return 0;
}
