/*
{1,2,3,4,5,6} -> insert at index -3
{1,2,3,4,5} -> delete at index -3
*/

//insert at index -3 :-
#include<stdio.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8};

    for (int i = 0; i < 7; i++)
    {
        if (i>=4)
        {
            a[i]=a[i+1];
        }
    }

    for(int i = 0; i<7; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}


//delete at index -3 :-
#include<stdio.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8};

    for(int i=7; i>=0; i--)
    {
        if(i>=2)
        {
            a[i+1]=a[i];
        }
    }

    a[2]=4;
    
    for(int i=0; i<=7; i++)
    {
        printf("%d\t" , a[i]);
    }

    return 0;
}

//char print :-
#include <stdio.h>

int main()
{

    int a[10] = {'S', 'K', 'I', 'L', 'L', 'Q', 'O', 'D', 'E'};

    for (int i = 9; i >= 0; i--)
    {
        if (i >= 5)
        {
            a[i + 1] = a[i];
        }
    }
    a[5] = '_';

    for (int i = 0; i <= 9; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}