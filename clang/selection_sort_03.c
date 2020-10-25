#include <stdio.h>

int main(void)
{
    int a[6] = {5,2,4,6,1,3};
    int ub = 5;
    int lb = 0;

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
    for(int i = 0; i < 6; i++)
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
