#include <stdio.h>                                                              
#include <stdbool.h>                                                            

int main(void)                                                                  
{                                                                               
    int digit, num;                                                             
    bool digit_seen[10] = {false};                                              

    printf("Enter the number: ");                                               
    scanf("%d", &num);                                                          

    while(num > 0)                                                              
    {                                                                           

        digit = num % 10;                                                       

        if(digit_seen[digit])                                                   
            break;                                                              
        digit_seen[digit] = true;                                               
        num /= 10;                                                              
    }                                                                           

    if(num > 0)                                                                 
        printf("Repeated digit\n");
    else
        printf("Not repeated digit\n");

    return 0;
}
