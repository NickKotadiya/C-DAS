/*#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter a valu of A :");
    scanf("%d",&a);

    printf("Enter a valu of B :");
    scanf("%d",&b);

    sum = a+b;
    printf("A + B = %d ",sum);

    return 0;
}*/

/***************************************************************/

/*#include <stdio.h>
#include <stdlib.h>

void linearsearch(int arr[], int val) {
    int found = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == val) {
            printf("%d Exists \n", val);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("%d not exist \n", val);
    }
}

int main() {

    // 1. int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; Static Array

    // 2.using random Function
    int a[10];
    for(int  i = 0; i < 10; i++)
    {
        a[i] = rand()%50+1;
    }

    //  3. User Input Array
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter Element At %d ",i+1);
    //     scanf("%d",&a[i]);
    // }


    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    int no;
    printf("\nEnter the value you want to search: ");
    scanf("%d", &no);
    linearsearch(a, no);

    return 0;5
}*/

/***************************************************************/

/*#include<stdio.h>
 int main ()
{
    int a;
    printf("1,2,3,4,5,6,7,8,9,10,11,12,13,14,15\n");

    printf("enter value :");
    scanf("%d",&a);
    int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},b=0;


    for(int i=0; i< 15; i++)
    {
    if(arr[i]==a)
    {
        b++;
    }
    }
     if(b>0)
    {
        printf("yes it is present");

    }
    else
    {
        printf("no it is not present");
    }
}*/

/***************************************************************/

/*#include <stdio.h>
int main()
{
    int array[100], search, n,i;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d integer\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter a number to search\n");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == search) //If required element is found
        {
            printf("yes it is present.\n", search, i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf(" %d no it is not present.\n", search);
    }
    return 0;
}*/

/***************************************************************/

/*#include <stdio.h>
int main()
{
    int array[100], search, i, n;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d integer(s)\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter a number to search\n");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (array[i] == search) /* If required element is found
        {
            printf("%d yes it is present.\n", search, i + 1);
            break;
        }
    }
    if (i == n)
        printf("%d no it is not present.\n", search);

    return 0;
}


while (low <= high)
    {
        if (array[mid] < key)
            low = mid + 1;
        else if (array[mid] == key)
        {
            printf("%d found at location %d.n", key, mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
        printf("Not found! %d isn't present in the list.n", key);
    return 0;
}*/

/***************************************************************/

/*#include<stdio.h>
#include<stdlib.h>
int a[10];

int bubble()
{
    int i,j,k;

    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j+1];
                a[j+1]=a[j];
                a[j]=k;
            }
        }
    }
}

int display()
{
    int i;

    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int i,j,k;

    for(i=0;i<10;i++)
    {
        a[i]=rand()%50;
    }
    display();
    printf("\n\n");
    bubble();
    display();

    return 0;
}*/

/***************************************************************/

/*#include<stdio.h>
#define n 5
int a[n] , f =-1 , r =-1;

int first_Insert(int data)
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
        printf("%d ,",a[i]);
    }
}

int main()
{
    first_Insert(10);
    first_Insert(20);
    first_Insert(30);
    first_Insert(40);
    first_Delete();
    display();
}*/

/***************************************************************/
// quick sort

/*#include<stdio.h>
#include<stdlib.h>
int n;
void print(int a[])
{
    int i;
    printf("\n");
    for(i=0; i<n; i++)
    printf("%d ",a[i]);
}
void quicksort(int a[],int first,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        print(a);
        pivot=first;
        i=first, j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<last)
            i++;

            while(a[j]>a[pivot])
            j--;

            if(i<j){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
              temp=a[pivot];
              a[pivot]=a[j];
              a[j]=temp;

        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
}
int main()
{
    int a[25],i;
    printf("how many element enter:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    a[i]=rand()%100+1;

    quicksort(a,0,n-1);
    printf("\n after quick sort:");
    print(a);
}*/

/***************************************************************/

// Linked list implementation in C

#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node
{
    int value;
    struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->value);
        p = p->next;
    }
}

int main()
{
    // Initialize nodes
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // Assign value values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // printing node-value
    head = one;
    printLinkedlist(head);
}