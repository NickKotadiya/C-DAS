#include<stdio.h>

int n;

void print(int a[])
{
    printf("\n");
    for ( int i = 0; i < n; i++)
        printf("%d",a[i]);
}

void quicksort(int a[],int first,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        print(a);
        pivot=first;
        i=first , j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<last)
            i++;

            while(a[j]>a[pivot])
            j--;

            if(i<j)
            {
                temp = a[pivot];
                a[pivot] = a[j];
                a[j] = temp;
            }
        }

        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
}

int main()
{
    int a[10];

    printf("How many element Enter :");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
        a[i]=rand()%100+1;

    quicksort(a,0,n-1);
    printf("\n After Quick Sort :");
    printf(a);
}