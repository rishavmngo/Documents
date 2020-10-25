#include <stdio.h>

int main()
{
    int fac = 1, i, n;
    float e = 1;

    printf("Enter a the value of n: ");
    scanf("%d",&n);

    for (i = 1; i < n; i++) {
        int j = i;
        while (j > 0) {
            fac *= j--;
        }
        e += 1 / fac;
    }

    printf("e = %f\n", e);

    return 0;
}



