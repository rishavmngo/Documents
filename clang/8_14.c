#include <stdio.h>

#define LEN 50 

int main(void)
{
    char msg[LEN], pun, input;
    int check_point = 0, space;

    printf("Enter a sentence: ");


    for ( int i = 0; (input = getchar()) != '\t' && i < 50; i++) {

        if (input == '!' || input == '?' || input == '.' || input == '\n') {
            pun = input;
            check_point = i;
            break;
        }
        msg[i] = input;
    }

    for (int i = check_point; i >= 0; i--) {
        if (msg[i] == ' ') {
            space = i;
            while ( ++i < check_point) {
                putchar(msg[i]);
            }
            i = space;
            check_point = space;
            printf(" ");
        }
       /* else if (msg[i] == 0 && msg[i] != ' ') {
            space = i;
            while ( ++i < check_point) {
                putchar(msg[i]);
            }
            i = space;
            check_point = space;
            printf(" ");
        }
        */
    }

    for (int i = 0; i < check_point; i++)
    {
        putchar(msg[i]);
    }

    printf("%c\n", pun);

}
