#include <stdio.h>

int main(void)
{

    int a,b,c,d,e,f,g,num;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

        a = num % 8;
        num /= 8;
        b = num % 8;
        num /= 8;
        c = num % 8;
        num /= 8;
        d = num % 8;
        num /= 8;
        e = num % 8;
        printf(" In octal, your number is: %d%d%d%d%d",e,d,c,b,a);
    return 0;
}


