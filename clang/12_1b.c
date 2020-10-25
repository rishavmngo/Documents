#include <stdio.h>

#define BUF 100

int main(void)
{
    int i = 0;
    char input, msg[BUF];

    printf("\n Enter a message: ");
    for (i = 0; i < BUF; i++)
    {
        if ((input = getchar()) == '\n') break;
        msg[i] = input;
    }

    //print the message in reversa, starting from the last character */
    printf("Reversal is: ");
    for (i = i - 1; i >= 0; i--)
        putchar(msg[i]);
    printf("\n\n");
    return 0;

}

