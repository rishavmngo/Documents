#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    _Bool first_char = false, word_bool = true;
    char input;
    int word_count = 0, char_count = 0;

    printf("Enter a sentence: ");

    while((input = getchar()) != '\n')
    {
        if (input == ' ' && (!first_char)) ;
        else if (input != ' ')
        {
            if (word_bool)
            {
                word_count++;
                word_bool = false;
            }

            char_count++;
            first_char = true;
        }
        else if (input == ' ')
            word_bool = true;
    }

    printf("Average word length: %.1f",  (float) char_count / word_count);

    return 0;
}


