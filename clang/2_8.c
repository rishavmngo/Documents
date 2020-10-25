#include <stdio.h>

int main()
{
    float loan, rate, payment;

    printf("Enter the amount of loan: ");
    scanf("%f",&loan);

    printf("Enter interest rate: ");
    scanf("%f",&rate);
    rate = rate / 12;
   
    printf("Enter montly payment: ");
    scanf("%f",&payment);

    loan = loan + (loan * (rate / 100.0f)) - payment;
    printf("Balance remaining after first payment: $%.2f\n",loan);


    loan = loan + (loan * (rate / 100.0f)) - payment;
    printf("Balance remaining after second payment: $%.2f\n",loan);
   

    loan = loan + (loan * (rate / 100.0f)) - payment;
    printf("Balance remaining after third payment: $%.2f\n",loan);

    return 0;
}

    
