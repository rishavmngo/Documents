#include <stdio.h>

int main()
{
    int number, digit, i;

    printf("Enter a number: ");
    scanf("%d",&number);

    do {
    
        printf("%d", (number % 10));
        number = number / 10;
    } while (number != 0);

    return 0;
}
