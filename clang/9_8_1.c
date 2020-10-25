#include <stdio.h>

int power(int x, int n);


int main(void)
{

    int x = 0, n = 0;

    printf("Enter the value of x and n");
    scanf("%d%d",&x,&n);

    printf("The value is %d ", power(x,n));
    return 0;

}

int power(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n % 2 == 0)
    {
        int i = power(x, n / 2);

        return i * i;
    }
    else
        return x * power(x , n - 1);
}



