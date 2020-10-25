

 int check(int a[], int len)
{
    int g = 0, j = 1;

    while ( j <= len)
    {
        if (a[g] >= a[j]) j++;
        else if(a[g] <= a[j])
        {
            g = j;
            j++;
        }
    }

    return g;
}
 
