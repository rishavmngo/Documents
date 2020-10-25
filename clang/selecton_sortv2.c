#include <stdio.h>

#define N 10

void selection_sort(int a[], int start, int end);

int main()
{
    int a[N];
    printf("Enter %d number to sort: ", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    selection_sort(a, 0, N - 1);

    printf("In sorted form: ");
    for(int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selection_sort(int a[], int start, int end)
{

    if ( start >= end) return;

    int max = 0, min = 1;
    while(min <= end) {

        if (a[max] <= a[min]) {
            max = min;
            min++;
        }
        else if (a[max] > a[min]) min++;
    }
    int swap = a[end];
    a[end] = a[max];
    a[max] = swap;
    end--;
    
    selection_sort(a, start, end);
}
        
