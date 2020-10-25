#include <stdio.h>
#define N 50


void selection_sort(int a[], int ub);

int main(void)
{
    int a[N] = {0}, ub, lb = 0, i;

    printf("Enter the elements(-1 to exit): ");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] == -1)
        {
            a[i] = 0;
            break;
        }
    }

    ub = i - 1;

    selection_sort(a, ub);

    printf("\n\n\n\nSorted array\n");
    for(int i = 0; i <= ub; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}

void selection_sort(int a[], int ub)
{
        for( int i = 0 ; i < ub; i++)
            for(int j = i + 1; j <= ub; j++)
            {
                if(a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
}
