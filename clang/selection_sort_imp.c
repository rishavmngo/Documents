#include <stdio.h>

#define N 5

void selection_sort(int a[], int start, int end);
void swap(int a[], int largest, int end);
int find_great(int a[], int start, int end);

int main(void)
{
    int a[N];

    printf("Enter %d elements to be sorted: ", N);
    for(int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    selection_sort(a, 0, N - 1);

    for(int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}


void selection_sort(int a[], int start, int end)
{
    if(end <= 1)
        return;
    int largest = find_great(a, start, end);

    swap(a, largest, end);

    selection_sort(a, start, end - 1);
}

int find_great(int a[], int start, int end)
{
    int largest = a[start], largest_index = 0;


    for(int i = 1; i <= end; i++)
    {
        if(a[i] > largest)
        {
            largest_index = i;
            largest = a[i];
        }
    }
    
    return largest_index;
}

void swap(int a[], int largest, int end)
{
    int temp = a[end];
    a[end] = a[largest];
    a[largest] = temp;
}

