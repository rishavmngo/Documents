#include <stdio.h>

void swap(int *p, int *q);

int main()
{

    int i = 5, j = 10;

    printf("i = ");
    scanf("%d", &i);
    printf("j = ");
    scanf("%d", &j);

    swap(&i, &j);

    printf("i = %d\nj = %d", i,j);

    return 0;
}

void swap(int *p, int *q)
{
    int j = *p;
    *p = *q;
    *q = j;
}
