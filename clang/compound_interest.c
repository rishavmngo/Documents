#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value)/ sizeof(value[0])))
#define INITIAL_AMOUNT 100.00

int main()
{
  double value[5];
  int i,year,num_year,low_rates;
  printf("Enter the interest rate:");
  scanf("%d",&low_rates);
  printf("Enter the years:");
  scanf("%d",&num_year);
  printf("\nYears");

  for(i=0;i<NUM_RATES;i++)
  {
    printf("%6d%%",i+low_rates);
    value[i]= INITIAL_AMOUNT;
  }
  printf("\n");
  for(year=1;year<=num_year;year++)
  {
    printf("%3d   ",year);
    for(i=0;i<NUM_RATES;i++)
    {
      value[i] +=(low_rates + i)/100.0*value[i];
      printf("%7.2f",value[i]);
    }
    printf("\n");
  }

return 0;

}
