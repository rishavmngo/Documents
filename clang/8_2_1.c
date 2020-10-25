#include <stdio.h>                                                              
#include <stdbool.h>                                                            

#define repeat 1
int main(void)                                                                  
{                                                                               
    int digit, num;                                                             
    bool digit_seen[2][10] = {false};                                              

    printf("Enter the number: ");                                               
    scanf("%d", &num);                                                          


    while(num > 0)                                                              
    {                                                                           

        digit = num % 10;                                                       

        if(digit_seen[0][digit])                                                   
            if(!digit_seen[repeat][digit])
            {
                digit_seen[repeat][digit] = true;
            }
        digit_seen[0][digit] = true;                                               
        num /= 10;                                                              
    }                                                                           

    for(int i = 0; !digit_seen[repeat][i]; i++)
    {
        if ( i == 9)
        {
            printf("not repeating\n");
            return 0;
        }
    }
    printf("repeated digits: ");
    for(int i = 0; i < 10; i++)
    {

        if(digit_seen[repeat][i])
            printf("%d ", i);
    }

    return 0;
}
