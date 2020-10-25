#include <stdio.h>
#include <stdbool.h>

bool search(int *a, int n, int key);

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int key = 1;
    
    if(search(a, 5, key) == true)
        printf("It's a match!\n");
    else
        printf("no match\n");
    return 0;
}

bool search( int *a, int n, int key)
{
    int* p;

    for (p = a; p < a + n; p++) {
        if (key == *p)
            return true;
        else
            return false;
    }
}

