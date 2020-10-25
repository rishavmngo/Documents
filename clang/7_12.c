#include <stdio.h>

int main()
{
    float exp = 0;
    char alpha;
    printf("Enter an expression:");

    while ((alpha = getchar()) != '\n') {
        switch(alpha) {
            case '*':
                exp *= (alpha = getchar());
                    break;
            case '+':
                exp += (alpha = getchar()); 
                    break;
            case '-':
                exp -= (alpha = getchar()); 
                    break;
            case '/':
                exp /= (alpha = getchar()); 
                    break;
            default :
                exp = alpha;
        }
    }
    printf("%f", exp);
}

