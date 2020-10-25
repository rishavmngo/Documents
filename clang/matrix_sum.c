#include <stdio.h>

int main()
{
    int i,j,sum = 0,a[5][5];

    for(i=0,j=0; i<5; i++)
    {
        printf("Enter row %d:",(i+1));
        scanf("%d%d%d%d%d",&a[i][j],&a[i][j+1],&a[i][j+2],&a[i][j+3],&a[i][j+4]);
    }


    printf("\nrow total:");
    for(i=0;i<5;i++)
    {
        for(j=0; j<5; j++)
        {
            sum = sum + a[i][j];
        }
            printf("%d ",sum);
            sum = 0;
    }
    
    printf("\nColumn total:");
    
    for(i=0;i<5;i++)
    {
        for(j=0; j<5; j++)
        {
            sum = sum + a[j][i];
        }
            printf("%d ",sum);
            sum = 0;
    }
    return 0;
}
