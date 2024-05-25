// -> InsertEnd and DeleteEnd -> InsertFist and DeletFist -> MId insert and Mid Delet
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL; 

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}

void deleteEnd()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("List Is Already Empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        free(ptr);
    }
    return;
}

void insertfirst(int n)
{
    struct node *newNode, *temp;
    int data;

    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; // Link the data field with data
        head->next = NULL; // Link the address field to NULL

        temp = head;
        for (int i = 2; i <= n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            /* If memory is not allocated for newNode*/
            if (newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; // Link the data field of newNode with data
                newNode->next = NULL; // Link the address field of newNode with NULL

                temp->next = newNode; // Link previous node i.e. temp to the newNode
                temp = temp->next;
            }
        }

        printf("\nSINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

void deleteFirst()
{
    struct node *Delete;

    if (head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        Delete = head;
        head = head->next;

        printf("\nData deleted = %d", Delete->data);
        free(Delete);

        printf("\nSUCCESSFULLY DELETED FIRST NODE FROM LIST\n");
    }
}

void insertMid(int data, int position)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("\nUnable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link data part
        newNode->next = NULL;

        temp = head;
        for(int i=2; i<=position-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            /* Link address part of new node*/
            newNode->next = temp->next;

            /* Link address part of n-1 node*/
            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("\nUNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}

// Delete middle node of the linked list
void deleteMid(int position)
{
    struct node *Delete, *prevNode;

    if (head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        Delete = head;
        prevNode = head;

        for (int i = 2; i <= position; i++)
        {
            prevNode = Delete;
            Delete = Delete->next;

            if (Delete == NULL)
                break;
        }

        if (Delete != NULL)
        {
            if (Delete == head)
                head = head->next;

            prevNode->next = Delete->next;
            Delete->next = NULL;

            /* Delete nth node */
            free(Delete);

            printf("SUCCESSFULLY DELETED NODE FROM MIDDLE OF LIST %d \n", position);
        }
        else
        {
            printf("Invalid position unable to delete.");
        }
    }
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List Is Empty..");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
int main()
{
    insertfirst(1);
    insertEnd(200);
    insertEnd(300);
    insertMid(400,4);
    insertEnd(500);
    insertEnd(600);
    insertEnd(700);
    display();

    deleteEnd();
    deleteEnd();
    deleteMid(4);
    deleteFirst();
    deleteFirst();
    display();

    return 0;
}
