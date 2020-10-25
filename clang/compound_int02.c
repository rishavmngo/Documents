#include <stdio.h>

int main()
{
  float p,amt;
  int i,j,year;

  printf("Enter the amount:");
  scanf("%f",&amt);
  printf("Enter the percentage:");
  scanf("%f",&p);
  printf("Enter the holding period:");
  scanf("%d",&year);

  float amount[5];

  for(j=0;j<year;j++)
  {
    int k=p;
    for(i=0;i<5;i++,k++)
    {
      amount[i]=amt+(amt*0.01*k);
      printf("%f ",amount[i]);
    }
    printf("\n");
    amt=amt+(amt*0.01*p);
  }
  printf("\n");
  return 0;
}
