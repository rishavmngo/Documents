#include <stdio.h>
#include <ctype.h>

#define LEN ((int)(sizeof(msg) / sizeof(msg[0])))

int main(void)
{
  char msg[50],input;
  int i;
  printf("Enter message:");

  for(i=0;i < LEN; i++)
   {
    switch(input = toupper(getchar()))
     {
       case 'A':
           msg[i] = '4';
           break;
       case 'B':
           msg[i] = '8';
           break;
       case 'E':
           msg[i] = '3';
           break;
       case 'I':
           msg[i] = '1';
           break;
       case 'O':
           msg[i] = '0';
           break;
       default:
           msg[i] = input;
     }
     if (input == '\n')
         break;
   }

   printf("In B1FF-speak: ");
   for (i = 0; i < LEN; i++)
   {
      if(msg[i] == '\n')
        break;
      putchar(msg[i]);
   }
   printf("!!!!!!!!\n\n");

   return 0;

}
