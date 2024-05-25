// quick sort
#include <stdio.h>

int n;
void print(int a[])
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void quicksort(int a[], int first, int last)
{
    int i, j, temp, pivot;
    if (first < last)
    {
        //print(a);SHOW HOW TO WARK CODE 
        pivot = first;
        i = first, j = last;
        while (i < j)
        {
            while (a[i] <= a[pivot] && i < last)
                i++;

            while (a[j] > a[pivot])
                j--;
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        quicksort(a, first, j - 1);
        quicksort(a, j + 1, last);
    }
}
int main()
{
    int a[10]={10,30,50,70,90,20,40,60,80,100};
    
    printf("how many element enter:");
    scanf("%d", &n);

    printf("10,30,50,70,90,20,40,60,80,100");
    int n = 10;

    quicksort(a, 0, n - 1);
    printf("\nAfter quick sort:");
    print(a);
}