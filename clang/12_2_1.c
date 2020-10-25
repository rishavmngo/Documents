#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 50
bool palin(char *msg, int len);

int main(void)
{
    char msg[N], input;
    int i = 0;

    printf("Enter a message: ");

    for(char *p = msg;(input = tolower(getchar())) != '\n';)
    {
        if(isalpha(input))
        {
            *p = input;
            p++;
            ++i;
        }
    }


    if(palin(msg, i))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}


bool palin(char *msg, int len)
{

    char *msg_org = msg, *msg_rev = &msg[len - 1];

    while(*msg_org == *msg_rev)
    {
        --len;
        ++msg_org;
        --msg_rev;
    }

    if(len == 0)
        return true;
    else 
        return false;
}

 

