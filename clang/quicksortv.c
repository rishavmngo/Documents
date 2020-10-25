#include <stdio.h>

#define N 10

int split(int a[], int low, int high);
void quicksort(int a[], int low, int high);

int main() 
{
    int a[N];

    printf("Enter %d numbers to be sorted: ", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, N - 1);

    printf("\nIn sorted order: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}

void quicksort(int a[], int low, int high)
{
    int middle;

    if (low >= high) return;

    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high)
{
    int p = a[low];

    for(;;) {

        while (low < high && p <= a[high]) high--;

        if (low >= high) break;
        a[low++] = a[high];

        while (low < high && p >= a[low]) low++;

        if (low >= high) break;
        a[high--] = a[low];
    }
    a[high] = p;
    return high;
}

