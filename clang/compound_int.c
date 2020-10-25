#include <stdio.h>

int main()
{
  int year,i;
  float amount,percent;

  printf("Enter the Initial amount:");
  scanf("%f",&amount);
  printf("Enter the percentage:");
  scanf("%f",&percent);
  printf("Enter the holding period:");
  scanf("%d",&year);

  for(i=1;i<=year;i++)
    {
      amount=amount+(amount*0.01*percent);
      printf("%d year:  %f\n",i,amount);
    }
  return 0;
}
