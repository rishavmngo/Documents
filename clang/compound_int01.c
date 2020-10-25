#include <stdio.h>



int main()
{
  int i=0,year,j;
  float n,p,set[5],b,k;

  printf("Enter the amount");
  scanf("%f",&n);
  printf("Enter the percentage");
  scanf("%f",&k);
  printf("Enter the hold time(in year):");
  scanf("%d",&year);
  printf("\n");
  for(j=0;j<year;j++)
  {
    p=k;
     while(i<=5)
     {

       b = n + (n * p * 0.01);
       set[i] = b;

       printf("%f    ",set[i]);
       i++;
       p++;
     }

     n = n + (n * k * 0.01);
     printf("\n");
     i=0;
  }
  printf("\n");


}
