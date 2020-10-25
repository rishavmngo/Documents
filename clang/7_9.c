#include <stdio.h>
#include <ctype.h>

int main()
{
    int hour, minute;
    char p_a;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &p_a);

    switch (toupper(p_a)) {
    case 'A':
        if (hour == 12)
            hour -= 12;
    case 'P':
        hour += 12;

    }        

        
    printf("Equivalent 24-hour time: %d:%d", hour, minute);
    return 0;
}


