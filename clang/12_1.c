#include <stdio.h>

#define BUF 100

int main(void)
{
    char *p;
    char input, msg[BUF];

    printf("\n Enter a message: ");
    for (p = &msg[0]; p < &msg[0] + BUF; p++)
    {
        if ((input = getchar()) == '\n') break;
        *p = input;
    }

    //print the message in reversa, starting from the last character */
    printf("Reversal is: ");
    for (p = p - 1; p >= &msg[0]; p--)
        putchar(*p);
    printf("\n\n");
    return 0;

}

