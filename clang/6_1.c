#include <stdio.h>

int main()
{
    int count,i;
    float num = 0,greater = 0;

    printf("Enter a number:");
    scanf("%f",&num);

    while( num != 0 )
    {
        if(greater < num)
        {
            greater = num; 
        }

        printf("Enter a number:");
        scanf("%f",&num);
    }

    printf("\nThe largest number entered was %5.3f",greater);

}
