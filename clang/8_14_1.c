#include <stdio.h>

int main(void)
{

    char input, msg[100], term_char;
    int i = 0, last_point = 0, temp;

    printf("Enter a sentence:");

    while((input = getchar()) != '\n')
    {
       if(input == '!' || input == '?' || input == '.')
       {
           term_char = input;
           break;
       }
          msg[last_point++] = input; 
    }
    //printf("%d  %c", last_point, msg[last_point - 1]);

    printf("Reversal of sentence:");
    for (i = last_point; i >= 0; i--)
    {
        if (msg[i] == ' ' || i == 0)
        {
            for (temp = i; i< last_point;)
            {
                printf("%c", msg[i++]);
            }
            last_point = temp;
            i = temp - 1;
            if(i <= 0)
                printf("%c", term_char);
            else
                printf(" ");
        }
    }

    return 0;
}


