#include <stdio.h>
#include <stdbool.h>

#define SEEN 0
#define REPEATED 1

int main()
{
    int digit;
    long n;
    int boolean[10][2] = {{false}};

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) {
        digit = n % 10;
        if (boolean[digit][SEEN]) {
            boolean[digit][REPEATED] = true;
        }
        boolean[digit][SEEN] = true;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        
        if (boolean[i][REPEATED] == true) {
            printf("Repeated digit(s): ");
            break;
        }
        else (i == 9) {
            printf("No, digits repeated.\n\n");
            return 0;
        }
    } 


    for ( int i = 0; i < 10; i++)
    {
        if (digit_seen[i][REPEATED] == true)
            printf("%d", i);
    }
    printf("\n\n");

    return 0;
}

