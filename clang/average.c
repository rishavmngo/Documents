#include <stdio.h>

void main()
{
  char ch;
  float i=1,count=0,sum=0;
  float average;
  printf("Enter the sentence:");

  while((ch = getchar()) != '\n')
  {
    if(ch != ' ')
    {
      count++;
    }
    else if(ch == ' ')
    {
      i++;
      sum+=count;
      count=0;


    }

  }
  printf(" sum : %f \n i : %f\n",sum,i);
  average = sum/i;
  printf("The average size of word is:%f\n",average);
}
