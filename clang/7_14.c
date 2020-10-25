#include <stdio.h>
#include <math.h>

int main() 
{
    double x;
    double y = 1, average = 0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);


    while (1) {
        average = (y + (x / y)) / 2;
        if (fabs(y - average) > (0.00001 * y)) 
            y = average;
        else break;
    }
    printf("Square root: %.5lf", average);

    return 0;
}

