//conditional operator
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a the value of A :");
    scanf("%d", &a);

    printf("Enter a the value of B :");
    scanf("%d", &b);

    printf("Enter a the value of C :");
    scanf("%d", &c);

    a > b && a > c ? printf("A is greatest") : (b > c ? printf("B is greatest") : printf("C is greatest"));

    return 0;
}

/* -> loops : 
            
    for :
    while :
    do while : 

    for ->
        for(initialization; condition; i/d)
        {
            //code
        }   
        */