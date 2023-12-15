#include<stdio.h>
int array[10]={8,15,20,90,35,5,45,10,50,70};

int main()
{
    
    int i,j;
    int n=0;
    printf("{8,15,20,90,35,5,45,10,50,70}\n \n");

    for (i = 0; i < 10; i++)
    {
        //array[i]%50;
        for (j = 0; j < 9; j++)
        {
           if(array[j]>array[j+1])
            {
                n=array[j+1];
                array[j+1]=array[j];
                array[j]=n;
            } 
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}