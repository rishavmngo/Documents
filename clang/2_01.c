#include <stdio.h>

#define DEDUCTION 32
#define MULTIPLE (5.0f / 9.0f )

int main()
{
    float f_temp,c_temp;

    printf("enter temprature in farhenheit: ");
    scanf("%f",&f_temp);

    c_temp = (f_temp - DEDUCTION) * (MULTIPLE);

    printf("Celsius equivalent : %f",c_temp);

    return 0;
}
