#include <stdio.h>


int main()
{
  int i, fib[40] = {[0] = 0, [1] = 1};
  int k = 0,l = 1;
  i = 2;
  while(i<40)
  {
    fib[i] = fib[k] + fib[l];
    i++;
    k++;
    l++;
  }
  for(i=0;i<40;i++)
  {
    printf("%d ",fib[i]);
  }
  printf("\n");
  return 0;
}
