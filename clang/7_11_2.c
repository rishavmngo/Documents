#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char first_init,input;
    _Bool space = false, first_char = false;

    printf("Enter first and last name: ");

    while(!first_char) 
        if((input = getchar()) != ' ') 
        {
            first_init = input;
            first_char = true;
        }
        else
            ;

    while((input = getchar()) != '\n')
    {
        if(input == ' ')
        {
            space = true;
        }
        else if(space)
        {
            putchar(input);
        }
    }
    printf(", %c.", first_init);




    return 0;
}


