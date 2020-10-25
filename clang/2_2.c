#include <stdio.h>
#define RADIUS 10
#define MULTI    (4.0f / 3.0f)
#define PIE    (3.14)

int main()
{
    float volume;

    volume = MULTI * PIE * ( RADIUS * RADIUS * RADIUS);

    printf("%.2f", volume);

    return 0;
}
