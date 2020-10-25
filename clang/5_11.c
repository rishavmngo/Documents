#include <stdio.h>

int main(void)
{

    int t, u;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &t, &u);

    
    if(t > 1 && t < 10) {
        switch (t) {
            case 2: 
                printf("twenty");
                break;
            case 3:
                printf("Thirty");
                break;
            case 4:
                printf("Fourty");
                break;
            case 5:
                printf("Fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("Seventy");
                break;
            case 8:
                printf("Eighty");
                break;
            case 9:
                printf("Ninty");
                break;
        }
    }
        else if(t == 1) {
            switch(u) {
                case 0:
                    printf("Ten");
                    break;
                case 1:
                    printf("Eleven");
                    break;
                case 2:
                    printf("Twelve");
                    break;
                case 3:
                    printf("Thirteen");
                    break;
                case 4:
                    printf("Fourteen");
                    break;
                case 5:
                    printf("Fifteen");
                    break;
                case 6:
                    printf("Sixteen");
                    break;
                case 7:
                    printf("Seventeen");
                    break;
                case 8:
                    printf("Eighteen");
                    break;
                case 9:
                    printf("Nineteen");
                    break;
            }
        }

               switch (u) {
                   case 1:
                       printf("-one");
                       break;
                   case 2:
                       printf("-two");
                       break;
                   case 3:
                       printf("-three");
                       break;
                   case 4:
                       printf("-four");
                       break;
                   case 5:
                       printf("-five");
                       break;
                   case 6:
                       printf("-six");
                       break;
                   case 7:
                       printf("-seven");
                       break;
                   case 8:
                       printf("-eight");
                       break;
                   case 9:
                       printf("-nine");
                       break;
               }
                
    return 0;
}


