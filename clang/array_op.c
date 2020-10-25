#include <stdio.h>
#define N 20

void add(int a[], int iteam, int lb, int *ub);
void del(int a[], int iteam, int lb, int *ub);
int traverse(int a[], int *ub);
void sort(int a[], int start , int end);
int partition(int a[], int start, int end);


int main(void)
{
    int a[N] , ub = -1;

    printf("Enter the elements in the array: ");

    for(int i = 0;i < N - 1; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] == -1)
        {
            break;
        }
        else
            ++ub;
    }
    
    
    //sort the array
     sort(a,0, ub);
     //add the particular element in the array
     add(a, 5,0, &ub);
     //del the particluar element in the array;
     del(a, 4,0, &ub); 


     for(int i = 0; i <= ub; i++)
     {
         printf("%d ", a[i]);
     }
    
   return 0;
}

void sort(int a[], int start , int end)
{
    if(start < end)
    {
        int p_index = partition(a, start, end);

        sort(a, start, p_index - 1);
        sort(a, p_index + 1, end);
    }
}

int partition(int a[], int start, int end)
{
    int pivot = a[end] ,p_index = start;

    for(int i = start; i < end; i++)
    {
        if(a[i] <= pivot)
        {
            int temp = a[i];
            a[i] = a[p_index];
            a[p_index] = temp;
            p_index++;
        }
    }

        a[end] = a[p_index];
        a[p_index] = pivot;
        return p_index;
}


void add(int a[], int iteam, int lb, int *ub)
{

    int k = 0;
    while(a[k] <= iteam && k <= *ub)
    {
        k = k + 1;
    }

    int j = *ub;


    //shifting the array
    while(j >= k)
    {
        a[j+1] = a[j];
        j = j - 1;
    }

    a[k] = iteam;

    *ub = *ub + 1;
}

void del(int a[], int iteam, int lb, int *ub)
{
    int k = 0;
    while(a[k] != iteam && k <= *ub)
    {
        k = k + 1;
    }

    int temp = a[k], j = k;

    while(j < *ub)
    {
        a[j] = a[j + 1];
        j = j + 1;
    }

    *ub = *ub - 1;

}

