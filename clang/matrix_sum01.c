#include <stdio.h>

int main()
{
    int i,j,sum,a[5][5];

    for(i=0,j=0; i<5; i++)
    {
        printf("Enter row %d:",i);
        scanf("%d%d%d%d%d",a[i][j],a[i][j],a[i][j+1],a[i][j+2],a[i][j+3],a[i][j+4]);
    }
   
}
