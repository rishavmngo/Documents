#include <stdio.h>                                                              
#include <stdbool.h>                                                            

#define repeat 1
int main(void)                                                                  
{                                                                               
    long digit, num;                                                             
    bool digit_seen[2][10] = {false};                                              
    int record[10] = {0,0,0,0,0,0,0,0,0,0};

    printf("Enter the number: ");                                               
    scanf("%ld", &num);                                                          


    while(num > 0)                                                              
    {                                                                           

        digit = num % 10;                                                       

        if(digit_seen[0][digit])                                                   
        {
            record[digit]++;
            if(!digit_seen[repeat][digit])
            {
                digit_seen[repeat][digit] = true;
            }
        }
        if(digit_seen[repeat][digit] == false)
        {
        record[digit]++;
        digit_seen[0][digit] = true;                                               
        }
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
    printf("repeated digits:0 1 2 3 4 5 6 7 8 9\n\t\t");
    for(int i = 0; i < 10; i++)
    {

        
            printf("%d ", record[i]);
    }

    return 0;
}
