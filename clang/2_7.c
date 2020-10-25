#include <stdio.h>

int main()
{

    int money,count;
    printf("Enter a dollar amount: ");
    scanf("%d",&money);

    
    count = money / 20 ;
    money = money % 20 ;
    printf("$20 bills: %d\n", count);

    count = money / 10 ;
    money = money % 10 ;
    printf("$10 bills: %d\n", count);

    count = money / 5 ;
    money = money % 5 ;
    printf("$5 bills: %d\n", count);

    count = money / 1 ;
    money = money % 1 ;
    printf("$1 bills: %d\n", count);

    return 0;
}
