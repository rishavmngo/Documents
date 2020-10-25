#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
int main(void)
{
    int twenties, tens, fives, ones, money = 93;



    pay_amount(money, &twenties, &tens, &fives, &ones);

    printf("$20 bill: %d\n$10 bill: %d\n $5 bill: %d\n $1 bill: %d\n",twenties, tens, fives, ones);
    return 0;

}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars = dollars % 20;

    *tens = dollars / 10;
    dollars = dollars % 10;
     
    *fives = dollars / 5;
    dollars = dollars % 5;

    *ones = dollars / 1;

}
