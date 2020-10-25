#include <stdio.h>

int main()
{
    int month, start_week, i, position, s = 0;

    printf("Enter number of days in month: ");
    scanf("%d", &month);

    printf("Enter starting day of the week (1=sun, 7=sat): ");
    scanf("%d", &start_week);

    for (i = 1, position = 0; i < start_week; i++, position++)
    {
        printf("   ");
    }

    for (i = 1; i <= month; i++, position++)
    {

        if (position % 7 == 0) {
            printf("\n");
            printf("%2d ",i);
        }
        else 
            printf("%2d ",i);
    }

    printf("\n");
    return 0;

}

