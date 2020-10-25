#include <stdio.h>
#include <ctype.h>

int main()
{
    char msg,a[50] = {' '}, al[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','n','m','o','p','q','r','s','t','u','v','w','x','y','z'};
   int i = 0,j,shift = 0;

   printf("Enter a message:");
   msg = getchar(); 


   while(msg != '\n')
   {
       a[i] = tolower(msg);
       i++;
       msg = getchar();
   }

   printf("Enter the shift:");
   scanf("%d",&shift);

   for(i = 0; i < 50; i++)
   {
       for(j = 0; j < 25; j++)
       {
           if(a[i] == al[j])
           {
              a[i] = al[j + shift];
           }
       }
   }

   for(i = 0; i < 50; i++)
   {
       printf("%c",a[i]);
   }

   return 0;
}

      

