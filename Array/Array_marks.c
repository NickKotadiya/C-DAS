
#include<stdio.h>

int main()
{
    int eng[5],guj[5],sp[5],total[5],per[5];
    int i;

    for(i=0; i<2; i++)
    {
        printf("%d students marks : \n",i+1);

        printf("Enter a marks of eng :");
        scanf("%d" , &eng[i]);

        printf("Enter a marks of guj :");
        scanf("%d" , &guj[i]);

        printf("Enter a marks of sp :");
        scanf("%d" , &sp[i]);

        total[i]=eng[i]+guj[i]+sp[i];
        per[i]=(total[i]*100)/300;

    }

    printf("\nNo\tEng\tGuj\tSP\tTotal\tPer\t\n");

    for(i=0; i<2; i++)
    {
        printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",i,eng[i],guj[i],sp[i],total[i],per[i]);

        if(per[i]<=35)
        {
            printf("Studen is fail");
        }
        else if (per[i]>=90)
        {
            printf("Grade A");
        }
        else if (80<=per[i]<=70)
        {
            printf("Grade B");
        }
        else if (60<=per[i]<=50)
        {
            printf("Grade C");
        }
        else if (40<=per[i]<=30)
        {
            printf("Grade D");
        }
        else
        {
            printf("Grade F");
        }
    }

    return 0;
}