#include <stdio.h>

#define N 5

void quick_sort(int a[], int start, int end);
int partition(int a[], int start, int end);

int main(void)
{

    int a[N];

    printf("Enter the %d elements to be sorted: ", N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    quick_sort(a,0, N - 1);

    for(int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

void quick_sort(int a[], int start, int end)
{
    if(start < end)
    {
        int p_index = partition(a,start, end);

        quick_sort(a, start, p_index - 1);
        quick_sort(a, p_index + 1, end);
    }
}

int partition(int a[], int start, int end)
{

    int pivot = a[end];
    int p_index = start;

    for(int i = start; i < end; i++)
    {
        if(a[i] <= pivot)
        {
            int temp = a[i];
            a[i] = a[p_index];
            a[p_index] = temp;
            p_index++;
        }
    }

    a[end] = a[p_index];
    a[p_index] = pivot;
    return p_index;
}
