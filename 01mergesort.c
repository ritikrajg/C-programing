#include <stdio.h>
#include <stdlib.h>
void printarr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void mergesort(int a[], int b[], int n, int m,int c[])
{
    int i, j, k;
    i = j = k = 0;

    while (i < n & i < m)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
        
    }
    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
}
int main()
{
    int a[] = {34, 45, 67, 78, 89};
    int b[] = {23, 34, 44, 56};
    int c[9];
    mergesort(a, b, 5, 4,c);
    printarr(c, 9);

    return 0;
}

