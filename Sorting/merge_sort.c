// merge sort
#include <stdio.h>
void merge(int a[], int l, int mid, int h)
{
    int b[50];
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
        
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];
    while (j <= h)
        b[k++] = a[j++];
    for (i = l; i <= h; i++)
        a[i] = b[i];
}
int mergesort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}
int main()
{
    int a[20] = {10, 50, 30, 40, 10, 70, 80, 90, 100, 3, 45, 50, 70, 80, 65, 88, 14, 18, 19, 20};
    int n = 20, i;
    
    printf("before sorting array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    mergesort(a, 0, n - 1);
    printf("\n after sorting array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}