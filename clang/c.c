#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, sum = 0;

    if (argc == 1)
    {
        printf("\nUsage: Enter integers as command-line arguments.\n\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
        sum += atoi(argv[i]);
    printf("\nTotal: %d\n\n", sum);

    return 0;
}

