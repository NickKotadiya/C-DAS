//stack -> push(inset) | pop (delet)
#include <stdio.h>
#define n 5
int a[n], top = -1;

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int insertEnd(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        a[++top] = val;
    }
}

int deletEnd()
{
    if (top < 0)
    {
        printf("Stack is already empty.....\n");
    }
    else
    {
        top--;
        //a[top] = top;
    }
}

int deletEnd(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        a[++top] = val;
    }
}


int main()
{
    insertEnd(10);//1
    insertEnd(20);//2
    insertEnd(30);//3
    insertEnd(40);//4
    insertEnd(50);//5
    insertEnd(60);//6
    display();

    deletEnd();//1
    deletEnd();//2
    deletEnd();//3
    deletEnd();//4
    deletEnd();//5
    deletEnd();//6 (Erro)
    display();
}