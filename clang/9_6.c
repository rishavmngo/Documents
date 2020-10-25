#include <stdio.h>

int polynomial(int x);
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    x = polynomial(x);

    printf("The value of the plynomial is %d ", x);
    printf("\n");
}

int polynomial(int x)
{
    x = ((3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + ( 7 * x) - (6));

    return x;
}

