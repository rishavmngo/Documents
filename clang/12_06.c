#include <stdio.h>

int sum_array(int *a, int n)
{
    int sum , *p;
    for (p = a; p < (a + n); p++)
        sum += *p;
    return sum;
}
int main(void)
{
    int a[3] = {1,2,3};
    printf("%d", sum_array(a, 3));
}
