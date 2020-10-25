#include <stdio.h>

#define N 10

void selection_sort(int a[], int start, int end);
int swap(int a[], int start, int end);
int check(int a[], int start, int end);
           
int main()
{
    int a[N];

    printf("Enter %d number to be sorted: ", N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    selection_sort(a, 0, N - 1);

    printf("In sorted form: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


void selection_sort(int a[], int start, int end)
{
    int new_end;

    if ( start >= end) return;

    new_end = swap(a, start, end);

    selection_sort(a, start, new_end);
}

int swap(int a[], int start, int end)
{
    int g = check(a, start, end);
    int s = a[end];
    a[end] = a[g];
    a[g] = s;

    end--;
    return end;
}

int check(int a[], int start, int end)
{
    int j = 1;
    while (j < end) {
        if (a[start] >= a[j]) j++;
        else if (a[start] < a[j]) start = j++;
    }
    return start;
}

