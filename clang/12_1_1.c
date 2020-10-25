#include <stdio.h>
#define N 50

int main(void)
{

    char input, a[N];
    int i = 0;

    for(char* p = a; p < a + N; p++)
    {
        if((input = getchar()) != '\n')
        {
            *p = input;
            ++i;
        }
        else
            break;
        
    }

   for(char* p = a + i; p >= a ;p--)
   {
      printf("%c", *p);
   } 
    
    return 0;
}


