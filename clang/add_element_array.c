#include <stdio.h>
#define N 50

int add_element(int a[], int ub, int lb, int iteam);

int main(void)
{

    int a[N] = {0}, i, ub, lb = 0, iteam;

    //snippet for taking elemnts from user
    printf("Enter the elements of array(-1 for exit): ");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
        
        if (a[i] == -1)
        {
            if(i == 0)
            {
                printf("array is empty");
                return 0;
            }
            a[i] = 0;
            break;
        }
    }

    ub = i - 1;


    //snippet for taking element to add in the array by user
    printf("\nEnter the element to add in array: ");
    scanf("%d", &iteam);

    ub = add_element(a, ub, lb, iteam);
   


    // print the modified array on the screen
    printf("\n\n\nModified array\n");
    printf("      ---------\n");
    for(int i = 0; i <= ub; i++)
    {
        printf("      |%d :  %-2d|\n", i,a[i]);
    }
    printf("      ---------\n");
    return 0;
}

int add_element(int a[], int ub, int lb, int iteam)
{
    int index = 0, pivot,i = 0;

    

    while(a[index] <= iteam && index <= ub)
    {
        ++index;        
    }


    pivot = ub;
    while(pivot >= index)
    {
        a[pivot + 1] = a[pivot];
        --pivot;
    }

    a[index] = iteam;
    ++ub;
    return ub;
}































