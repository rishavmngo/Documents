#include <stdio.h>

int main()
{
    int limit, i;

    printf("Enter the limit: ");
    scanf("%d",&limit);

    for (i = 1; i <= limit; i++)
    {
        if ((i * i) % 2 == 0)
        printf("%d\n",(i * i));

        else if (limit < i * i) break;
    }

    return 0;
}
