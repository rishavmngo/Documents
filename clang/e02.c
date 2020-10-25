#include <stdio.h>

int check(int x, int y, int n)
{
    if ( x > 0 && y > 0 && x < n -1 && y < n - 1)
        return 1;
    else
        return 0;
}

int main(void)
{
    int x,y,z;
    printf("Enter x,y,n");
    scanf("%d%d%d", &x, &y, &z);

    check(x,y,z);
}
