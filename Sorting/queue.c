// Queue :-
#include<stdio.h>
#define n 10
int a[n] , f =-1 , r =-1;

int Insert_End(int data)
{
    if(r >= n-1)
    {
        printf("Queue Is Full...");
    }
    else if(f < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else
    {
        r++;
        a[r] = data;
    }
}

int first_Delete()
{
    if (f == r)
    {
        printf("Queue Is Empty...\n");
    }
    else if (f < 0)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}

int display()
{
    for (int i = f; i <= r; i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    printf("10 20 30 40 50 60 70 80 90 100\n\n");
    Insert_End(10);
    Insert_End(20);
    Insert_End(30);
    Insert_End(40);
    Insert_End(50);
    Insert_End(60);
    Insert_End(70);
    Insert_End(80);
    Insert_End(90);
    Insert_End(100);

    first_Delete();
    first_Delete();
    display();
}
a
// D_Queue :-
#include <stdio.h>
int arr[6];
int f = -1, r = -1;

int insertend(int ele)
{
    if (r == ele - 1)
    {
        printf("Queue Is Full");
        return 0;
    }
    if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
    }
    r++;
    arr[r] = ele;
}

void display()
{
    for (int i = f + 1; i <= r; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}
int deletefirst()
{
    f++;
    if (f == r)
    {
        f = -1;
        r = -1;
    }
    if (f == -1 && r == -1)
    {
        printf("Queue is Empty");
    }
}
int main()
{

    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    deletefirst();
    deletefirst();
    display();
    return 0;
}