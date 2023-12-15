#include <stdio.h>

int binary_serch(int n, int min, int max)
{
    int mid;
    mid = min(max+min)/2;

    if(n == mid)
    {
        return 1;
    }
    else if (n > mid)
    {
        min = mid;
        return binary_serch(n, min, max);
    }
    else if (n < mid)
    {
        max = mid;
        return binary_serch(n, min, max);
    }
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n,mid,min,max,x=5,result;

    printf("Enter a valu of B :");
    scanf("%d",n);


    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    min = a[0];
    max = a[10];

    result = binary_serch(x, min, max);
    printf("%d",result);
    
    if (result == 1)
    {
        printf("x is present in an array");
    }
    
}
