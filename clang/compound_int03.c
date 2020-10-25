#include <stdio.h>

int main()
{
 int i,j,year,count=0;
 float k,p,amount;
 long double a[5];

 printf("Enter the Initial amount");
 scanf("%f",&amount);
 printf("Enter the Percentage");
 scanf("%f",&k);
 printf("Enter the hold year");
 scanf("%d",&year);


 for(i=0;i<5;i++)
   {
    a[i]=amount;
   }
  p=k;
 for(i=0;i<5;i++)
   {

    for(j=0;j<12;j++)
     {
       a[i]= a[i] + (a[i]*0.01*p);

     }
     p++;
     printf("%7.2Lf  ",a[i]);
     if(i==4)
      {
       p=k;
       i=0;
       printf("\n");
       count++;
      }
      if(count >=year)
       break;
   }
}
