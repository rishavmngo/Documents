#include <stdio.h>

int main()
{
    int input, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &input);
    int n = input;

    while(input > 0) {
        factorial *= input--;
    }

    printf("Factorial of %d : %d", n, factorial);

    return 0;
}
