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
        if (i == 0) {
            while ( i < check_point) {
                i++;
                printf("%c", msg[i]);
            }
            printf("%c\n", pun);
            break;
        }
        else if (msg[i] == ' ') {
            space = i;
            while (i < check_point) {
                printf("%c", msg[i++]);
            }
            printf(" ");
            i = space;
        }
        i--;
    }

}
