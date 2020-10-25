#include <stdio.h>

#define N 7
int main(void)
{
    int a[N], low = 0, high = N -1, p, something_little, something_more;

    printf("Enter %d numbers to be sorted: ", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    p = a[0];
    for (;;) {
        if (low < high && a[high] > p) {
            high++;
        }
        else if (low < high && a[high] < p) {
            a[low] = a[high];
            low++;
        }
        else if (low < high && a[low] < p) {
            low++;
        }
        else if(low < high && a[low] > p) {
            a[high] = a[low];
            high++;
        }
        else if (low == high) {
            a[high] = p;
            break;
        }
    }
    printf("\n");
    printf("In sorted order:");

     for (int i = 0; i < N; i++) {
        printf(" %d", a[i]);
    }   
     return 0;
}

