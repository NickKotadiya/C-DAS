// Self refrential node
#include<stdio.h>

struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b,c,d;

    b.data = 20;
    b.ch = 'B';
    //b.ptr = &a;

    a.data = 10;
    a.ch = 'A';
    //a.ptr = &b;

    c.data = 30;
    c.ch = 'C';
   // c.ptr = &d;

    d.data = 40;
    d.ch = 'D';
    //d.ptr = &c;
    
    printf("A : %d , A : %c", a.data , a.ch);
    printf("\nB : %d , B : %c", b.data , b.ch);

    //a.ptr = &b;
    /*printf("\nA: %d , A: %c" , b.ptr->data , b.ptr->ch);
    printf("\nB: %d , B: %c" , a.ptr->data , a.ptr->ch);
    printf("\nC: %d , C: %c" , d.ptr->data , d.ptr->ch);
    printf("\nD: %d , D: %c" , c.ptr->data , c.ptr->ch);*/
}