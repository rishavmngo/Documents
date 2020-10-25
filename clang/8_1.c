#include <stdio.h>

#define N 50
int main()
{
    int boolean[10] = {0};
    long input;
    int digit;

    printf("Enter a number: ");

    scanf("%ld", &input);

    printf("Repeated digits : ");

    while (input > 0) {

        digit = input % 10;
        input = input / 10;

        if (boolean[digit] == 0) {
            boolean[digit] = 1;
        }
        else if (boolean[digit] == 1) {
            boolean[digit] = 2;
            printf("%d ", digit);

        }
    }
    return 0;


}
    
