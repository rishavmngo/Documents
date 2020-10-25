/* Modify the repdigit.c program of Section 8.1 so that it shows which digits
 * (if any) were j:
 *
 * Enter a number: 939577
 * j digit(s): 7 9
 */
#include <stdbool.h> /* C99 only */
#include <stdio.h>

// #define SEEN 0
// #define j 1

int main(void)
{
    bool digit_seen[10][15] = {{false}};
    int digit, i,SEEN=0,j=1;
    long n;

    printf("\nEnter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit][SEEN])
        {
          if(digit_seen[digit][j])
          {
            j++;
            digit_seen[digit][j]=true;
            j=1;

          }
            digit_seen[digit][j] = true;
        }
        digit_seen[digit][SEEN] = true;
        n /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (digit_seen[i][j] == true)
        {
            printf("j digit(s): ");
            break;
        }
        else if (i == 9) /* If all values were false */
        {
            printf("No j digits.\n\n");
            return 0;
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (digit_seen[i][j] == true)
            printf("%d ", i);
    }
    printf("\n");
    for(i = 1; i < 10; i++)
    {
      for(j=0; j < 10;j++)
      {
       if(digit_seen[i][j]!=1)
       {printf(" %d",j);}
       break;

      }

    }
    printf("\n\n");
    for(j=0;j<10;j++)
    {
      for(i=0; i < 10;i++)
      {
      printf("%d ",digit_seen[i][j]);
      }
      printf("\n");
    }
    return 0;
}
