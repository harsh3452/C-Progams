#include <stdio.h>
#include <conio.h>
int queue[100];
int x, op, rear = -1, front = -1, size;
void enqueue()
{
    if ((rear + 1) % size == front)
    {
        printf("Overflow");
    }
    else if (rear == -1 && front == -1)
    {
        rear = front = 0;
        printf("Element to enqueue:");
        scanf("%d", &x);
        queue[rear] = x;
    }
    else
    {
        printf("Element to enqueue:");
        scanf("%d", &x);
        rear = (rear + 1) % size;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("Underflow");
    }
    else if (rear == 0 && front == 0)
    {
        printf("Dequeued elment is %d", queue[front]);
        rear = front = 0;
    }
    else if ((rear + 1) == front)
    {
        printf("Underflow");
    }
    else
    {
        printf("Dequeued element is %d", queue[front]);
        front = (front + 1) % size;
    }
}
void display()
{
    int i = front;
    printf("Queue is ");
    while (i != rear)
    {
        printf("%d ", queue[i]);
        i = (i + 1) % size;
    }
    printf("%d", queue[rear]);
}
void main()
{
    printf("Enter the size of queue:");
    scanf("%d", &size);
    printf("Operations \n 1.Push \t 2.Pop \t 3.Display \t 4.Exit \n");
    do
    {
        printf("\nEnter  your choice :");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            enqueue();
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("SEE YAA!!");
            break;
        }
        default:
        {
            printf("Enter a valid choice!!");
            break;
        }
        }
    } while (op != 4);
    getch();
}
