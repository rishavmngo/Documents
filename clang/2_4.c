#include <stdio.h>
#define TAX (5.0f / 100.0f)

int main()
{
    float amt;
    printf("Enter an amount:");

    scanf("%f",&amt);

    amt = amt + (amt * TAX);
    printf("With tax added: $%.2f",amt);

    return 0;
}

