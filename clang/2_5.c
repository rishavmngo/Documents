#include <stdio.h>

int main()
{
    float x;

    printf("Enter the value of x: ");
    scanf("%f",&x);

    x =  ((((3 * x + 2) * x - 5 ) * x + 7) * x - 6);
    printf("%f",x);

    return 0;
}
