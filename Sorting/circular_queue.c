/*#include <stdio.h>
int a[5], f = -1, r = -1, n = 5;
int insertend()
{
    if (f == r)
    {
        if (f == -1)
        {
            f++;
            r++;
            printf("Enter a value :");
            scanf("%d", &a[r]);
            goto end;
        }
    }
    if (f != r + 1)
    {
        r = (r + 1) % n;
        printf("Enter a value :");
        scanf("%d", &a[r]);
    }
    else if (f == r + 1)
    {
        printf("Queue is already full\n");
    }

end:
    printf("");
}

int deletefirst()
{
    if (f == r)
    {
        if (f == -1)
        {
            printf("Queue is already empyty");
            goto end;
        }
        else if (f != -1)
        {
            f == -1;
            r == -1;
            goto end;
        }
    }
    else if (f != r)
    {
        f = (f + 1) % n;
    }

end:

    printf("");
}

int display()
{
    int i, j = f, k;

    do
    {
        printf("%d ", a[j]);
        j = (j + 1) % n;
    } while (j != r + 1);
}

int main()
{
    int i, j;

    printf("1)inseretend\n2)deletefirst\n3)exit\n");

    for (i = 0; i < 50; i++)
    {
        printf("Enter your choice :");
        scanf("%d", &j);

        switch (j)
        {
        case 1:
        {
            insertend();
            break;
        }

        case 2:
        {
            deletefirst();
            break;
        }

        case 3:
        {
            goto end;
        }

        default:
        {
            goto end;
        }
        }
    }
end:
    display();

    return 0;
}*/

#include<stdio.h>
#define n 6

int a[n];
int front = -1, rear = -1;

// Here we check if the Circular queue is full or not
int checkFull ()
{
  if ((front == rear + 1) || (front == 0 && rear == n - 1))
    {
      return 1;
    }
  return 0;
}

// Here we check if the Circular queue is empty or not
int checkEmpty ()
{
  if (front == -1)
    {
      return 1;
    }
  return 0;
}

// Addtion in the Circular Queue
void Insert (int value)
{
  if (checkFull ())
    printf ("Overflow condition\n");

  else
    {
      if (front == -1)
	front = 0;

      rear = (rear + 1) % n;
      a[rear] = value;
      printf ("%d was enqueued to circular queue\n", value);
    }
}

// Removal from the Circular Queue
int Delete ()
{
  int variable;
  if (checkEmpty ())
    {
      printf ("Underflow condition\n");
      return -1;
    }
  else
    {
      variable = a[front];
      if (front == rear)
	{
	  front = rear = -1;
	}
      else
	{
	  front = (front + 1) % n;
	}
      printf ("%d was dequeued from circular queue\n", variable);
      return 1;
    }
}

// Display the queue
void print ()
{
  int i;
  if (checkEmpty ())
    printf ("Nothing to dequeue\n");
  else
    {
      printf ("\nThe queue looks like: \n");
      for (i = front; i != rear; i = (i + 1) % n)
	{
	  printf ("%d ", a[i]);
	}
      printf ("%d \n\n", a[i]);

    }
}

int main ()
{
  // Not possible as the Circular queue is empty

  Insert (15);
  Insert (20);
  Insert (25);
  Insert (30);
  Insert (35);

  print ();
  Delete ();
  Delete ();

  print ();

  /*enqueue (40);
  enqueue (45);
  enqueue (50);
  enqueue (55);			//Overflow condition
  print ();*/

  return 0;
}