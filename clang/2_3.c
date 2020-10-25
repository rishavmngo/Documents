
#include <stdio.h>
#define MULTI    (4.0f / 3.0f)
#define PIE    (3.14)

int main()
{
    float volume, r;

    printf("Enter the radius: ");
    scanf("%f",&r);

    volume = MULTI * PIE * ( r * r * r);

    printf("%.2f\n", volume);

    return 0;
}
