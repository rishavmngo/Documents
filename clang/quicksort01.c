#include <stdio.h>

#define N 10
void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main()
{
    int a[N];
    printf("Enter a %d numbers: ", N);

    for ( int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, N - 1 );

    printf("In sorted order: ");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}


void quicksort(int a[], int low, int high) {
    int middle;

    if ( low < high) {
        middle = split(a, low, high);
        quicksort(a, low, middle - 1);
        quicksort(a, middle + 1, high);
    }
}
    int split(int a[], int low, int high) {
        int pivot = a[high];
        int p_index = low;

        for(int i = 0; i < (high - 1); i++) {
            if (a[i] <= pivot) {
                int b = a[i];
                a[i] = a[p_index];
                a[p_index] = b;
                p_index++;
            }
        }
        int b = a[high];
        a[high] = a[p_index];
        a[p_index] = b;
        return p_index;
    }



