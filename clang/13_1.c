#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define N 15

int read_line(char str[], int n);
int main(void)
{

    char largest[N], smal[N] = "a", input[N];
    bool First_word = false, only_word = false;
    int n = 0;

    while(n != 4)
    {
        printf("Enter word: ");
        n = read_line(input, N);

        if(First_word)
        {
            if(strcmp(largest, input) < 0)
            {
                strcpy(largest, input);

            }
            else if(strcmp(smal, input) > 0)
            {
                strcpy(smal, input);
            }
            only_word = true;
        }
        if(!First_word)
        {
            strcpy(largest, input);
            strcpy(smal, input); 
            First_word = true;
        }



    }

    if(only_word)
        printf("Smallest word: %s\nLargest word: %s\n", smal, largest);
    else
        printf("\n%s is neither smallest nor largest\n", smal);

    return 0;
}


int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

