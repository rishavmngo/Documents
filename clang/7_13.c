#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int first_letter = FALSE;
    float word_count = 0, letter_count = 0;
    char input;
    float average;
    printf("Enter a Sentence: ");

    while ((input = getchar()) != '\n') {

        if (input != ' ') {

            if (!first_letter) {
                first_letter = TRUE;
                word_count++;
                letter_count++;
            }

            else 
                letter_count++;
        }
        else  if (input = ' ') {
            first_letter = FALSE;
        }

    }
    printf("\n");
    average =letter_count / word_count;
    printf("Average word length: %.2f", average);
    return 0;
}



