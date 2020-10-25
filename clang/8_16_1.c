#include <stdio.h>
#include <ctype.h>

int main(void)
{

    int i,tracker[26] = {0};

    char input;

    printf("Enter first word: ");
    while((input = tolower(getchar())) != '\n')
    {
        if(isalpha(input))
        {
            tracker[input - 'a']++;
        }
    }
    printf("Enter second word: ");
    while((input = tolower(getchar())) != '\n')
    {
        if(isalpha(input))
        {
            tracker[input - 'a']--;
        }
    }

    for(i = 0; i < 26; i++)
    {
        if(tracker[i] != 0)
        {
            printf("Not an anagram");
            break;
        }
    }
    if(i > 25)
    {
        printf("yes an anagram");
    }

    return 0;

}


