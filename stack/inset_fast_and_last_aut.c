#include <stdio.h>
#define n 5
int arr[5], top = -1;

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        arr[++top] = val;
    }
}

int deleteend()
{
    if (top == -1)
    {
        printf("Stack is empty.......\n");
    }
    else
    {
        top--;
    }
}

int insertfirst(int val)
{
    int w;
    
    if (top == -1)
    {
        arr[++top] = val;
    }
    else if (top >= 6)
    {
        printf("Stack is full.....");
    }
    else
    {
        w = ++top - 1;

        for (int i = top; i > 0; i--)
        {
            arr[i] = arr[w];
            w--;
        }
        arr[0] = val;
    }
}

int deletefirst()
{
    int t = 1;

    if (top == -1)
    {
        printf("Stack is empty.......");
    }

    else
    {
        for (int i = 0; i <= top; i++)
        {
            arr[i] = arr[t];
            t++;
        }
    }
    top--;
}

int main()
{
    insertend(50);
    insertend(40);
    insertend(30);
    insertend(20);
    insertend(10);
    insertfirst(60);

    deleteend();
    deleteend();

    printf("\n\n");
    display();
    return 0;
}