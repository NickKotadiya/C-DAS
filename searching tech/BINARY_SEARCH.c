#include <stdio.h>
int binary_serch(int n, int min, int max)
{
    int l;
    l = max;
    
    {
        int mid;
        mid = min + (max - min) / 2;
        if (n == mid)
        {
            return 1;
        }
        else if (n > mid)
        {
            min = mid;
            if(min<max)
            {
            return binary_serch(n, min, max);
            }
            else{
                return 0;
            }
        }
        else if (n < mid)
        {
            max = mid;
            if(max>min)
            {
            return binary_serch(n, min, max);
            }
            else{
                return 0;
            }
        }
    }
    
}

int main()
{
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int i, j, mid, min, max, x, result,c;

    for (i = 0; i <= 19; i++)
    {
        for (j = i+1; j <= 19; j++)
        {
            if (a[i] > a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }

    for (i = 0; i < 20; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nenter a valu of found :");
    scanf("%d", &x);

    min = a[0];
    max = a[19];

    result = binary_serch(x, min, max);

    if (result == 1)
    {
        printf("\npresent in array");
    }
    else
    {
        printf("\nNot found");
    }

    return 0;
}