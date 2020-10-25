#include <stdio.h>
#include <ctype.h>


#define BUF 100
int main(void)
{
    char input, msg[BUF] = {0};

    int i = 0, j;
    while((input = tolower(getchar())) != '\n')
        if (isalpha(input)) msg[i++] = input;

    for (j = i-1, i = 0; i < BUF; i++)
    { 
        if (msg[i] == 0) break;
        if (msg[i] != msg[j])
        {
            printf("Not a palindrom\n\n");
            return 0;
        }
        j--;
    }
    printf("Palindrom\n\n");
    return 0;
}



