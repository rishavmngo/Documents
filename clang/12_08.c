#include <stdio.h>

void store_zeros(int a[], int n)
{
    int* p;
    for (p = a; p < a + n; p++)
        *p = 0;
}

int main()
{
    int a[2] = {1,2};

    store_zeros(a, 2);

    for(int i = 0; i < 2; i++) {
        printf("%d\n", *(a + i));
    }
    return 0;
}
