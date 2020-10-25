#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input, msg[80];
    int i = 0, shift = 0;

    printf("Enter messgae to be encrypted: ");
    while((input = getchar()) != '\n')
    {
        if(isalpha(input))
            msg[i++] = input;
        else
            msg[i++] = input;

    }
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);


    for(int j = 0; j < i; j++)
    {
        if(isalpha(msg[j]))
        {
            if(msg[j] >= 'A' && msg[j] <= 'Z')
                printf("%c",(((msg[j] - 'A') + shift) % 26 + 'A'));
            else if(msg[j] >= 'a' && msg[j] <= 'z')
                printf("%c",(((msg[j] - 'a') + shift) % 26 + 'a'));
        }
        else
            printf("%c", msg[j]);
    }

    return 0;
}


