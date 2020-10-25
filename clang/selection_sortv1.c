#include <stdio.h>

#define N 10

void selection_sort(int a[], int start, int end);
int check_array(int a[], int start, int end);
int great(int a[], int start, int end);
void swap(int a[], int max, int end);

int main()
{
    int a[N] = {9,16,47,82,4,66,12,3,25,51};
    selection_sort(a, 0, N - 1);
   
    for(int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
    
void selection_sort(int a[], int start, int end)
{
    int new_end;
    if (start >=end) return;

    new_end = check_array(a, start, end);
    selection_sort(a, start, new_end);
}

int check_array(int a[], int start, int end)
{
    int max = great(a, start, end);
    swap(a, max, end);
    end--;

    return end;
   
} 

int great(int a[], int max, int end)
{
    int i = 1;
    while (i < end) {
        if (a[max] >= a[i]) i++;
        else if (a[max] < a[i]) max = i++;
    }

    return max;
}


    
void swap(int a[], int max, int end)
{
    int temp = a[end];
    a[end] = a[max];
    a[max] = temp;
}
