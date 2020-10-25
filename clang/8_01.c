#include <stdio.h>

int main(void)
{

    float amt = 100;
    int year, rate;
    float a[5] = {100,100,100,100,100};

    printf("Enter the interest rate: ");
    scanf("%d", &rate);

    printf("Enter number of years: ");
    scanf("%d", &year);

    printf("Years\t %d%\t%d%\t%d%\t%d%\t%d%\n", rate, rate + 1, rate + 2, rate + 3, rate + 4);
    for (int i = 1; i <= year; i++)
    {
        printf("  %d\t", i);
        for(int j = 0, r = rate, y = 1; j < 5; j++, r++)
        {
            a[j] = a[j] + (a[j]  * r * y * 0.01);
            printf("%.2f  ", a[j]);
        }
        printf("\n");
    }
    return 0;

}


