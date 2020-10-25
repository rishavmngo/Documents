#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
int main()
{

    char first_letter = 0;
    char input;
    int space = FALSE;

    printf("Enter your Full Name: ");

    while ((input = getchar()) != '\n') {

        if (!first_letter) {
            if (input != ' ')
                first_letter = input;
        }
        else if (space == FALSE) {
            if (input == ' ')
                space = TRUE;
        }
        else if (input != ' ')
            putchar(input);
    }
    printf(", %c.", first_letter);

    return 0;
}
