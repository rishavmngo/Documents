#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool digit_seen[10]={false};
  int digit;
  long n;
  printf("Enter a digit:");
  scanf("%ld",&n);

  while(n>0)
  {
    digit = n % 10;
    if(digit_seen[digit])
    {
      break;
    }
    digit_seen[digit]=true;
    n =n/10;
  }
  if(n>0)
  {
    printf("Digit_repeated\n");
  }
  else
  {
    printf("have no digit repeated\n");
  }
  return 0;
}
