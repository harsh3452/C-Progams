#include <stdio.h>
int queue[100];
int x, op, rear = -1, front = -1, size;
void enqueue()
{
     if (rear == size - 1)
  {
    printf("Queue is Full");
  }
  else  if(rear == -1 && front == -1)
  {
      front=rear=0;
    printf("Enter the element 1:");
    scanf("%d",&x);
  
    queue[rear]=x;
  }
  
  else 
  {
    printf("Enter the element:");
    scanf("%d",&x);
    queue[++rear]=x;
  }
}
void dequeue()
{
    if(front == -1 || front == size)//check if front is -1 or front is equal to size of the queue which means the queue is empty
    {
        printf("Queue is Empty");
    }
    else if (front == 0 && rear == 0)
    {
        printf("Dequeued element is %d",queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("Dequeued element is  %d",queue[front++]);
    }
}
void display()
{
   if(front == -1 || front == size) //check if front is -1 or front is equal to size of the queue which means the queue is empty
   {
    printf("Queue is Empty");
   }
   else 
   {
    printf("Queue is : ");
    for(int i = front; i <= rear; i ++)
    {
        printf("%d ",queue[i]);
    }
   }
}
int main()
{   printf("Enter the size of queue:");
    scanf("%d",&size);
    printf("Operations \n1.Push\t2.Pop\t3.Display\t4.Exit"); 
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
        default :
        {
            printf("Enter a valid choice!!");
            break;
        }
        }
    }while(op != 4);
    return 0;
}
