#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int roll_dice(void);
bool play_dice(int roll);

int sum(int min, int max);
int main()
{
    int win = 0, loss = 0;
    char response;


    srand((unsigned) time(NULL));
    if(play_dice(1)) {
        printf("\nYou win!");
        win++;
    }
    else {
        printf("\nYou lose!");
        loss++;
    }
    

    printf("\nPlay again?");
    scanf("%c", &response);


    switch(response) {
        case 'y': case 'Y':
            play_dice(2);
            break;
        default:
            printf("\nWins: %d  Losses: %d", win, loss);
            break;
    }
}

bool play_dice(int roll)
{
   int dice = roll_dice();
   int point;

   // condition for first roll
   if (roll == 1) {
       roll++;
       if (dice == 7 || dice == 11) {
           printf("You rolled: %d\n", dice);
           return true;
       }
       else if (dice == 2 || dice == 3 || dice == 12) {
           printf("You rolled: %d\n", dice);
           return false;
       }
       else {
           printf("You rolled: %d\n", dice);
           point = dice;
       }
   } // condition for other than first roll
   else  {
       if (dice == point) return true;
       else if (dice == 7) return false;
       else {
           printf("you rolled: %d\n", dice);

       }
       play_dice((roll + 1));

   }
}

int roll_dice(void)
{
    int min = 1, max = 2;
    
    int dice_1 = min + (rand() % (max - min + 1));
    int dice_2 = min + (rand() % (max - min + 1));
    
    int sum = dice_1 + dice_2;

    return sum;
}

