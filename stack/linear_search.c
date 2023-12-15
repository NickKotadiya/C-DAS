#include <stdio.h>
int main()
{
    int a,x=0;

    int arr[15] = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
    printf("10,20,30,40,50,60,70,80,90,100,110,120,130,140,150\n");

    printf("Enter a valu of A :\n");
    scanf("%d",&a);

    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == a)
        {
            x++;
        }
    }
    if(x>0)
    {
        printf("yes it is present");

    }
    else
    {
        printf("no it is not present");
    }
    return 0;
}