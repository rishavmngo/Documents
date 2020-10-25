#include <stdio.h>

int main(void)
{
    int characters, words;
    char input, last_input;

    characters = words = last_input = 0; /* initializing to 0 */

    printf("\nEnter a sentence: ");

    while ((input = getchar()) != '\n')
    {
        if (input != ' ')
        {
            characters++;
            if (words == 0)
                words++;
        }
        else if (last_input != ' ')
            words++;

        last_input = input;
    }
    printf("sum %d\nwords %d\n",characters,words);
    printf("Average word length: %.1f\n\n", (float) characters / words);

    return 0;
}
