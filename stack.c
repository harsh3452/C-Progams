#include <stdio.h>
int stack[100];
int x, op, size, top = -1;
void push()
{
  if (top == size - 1)
  {
    printf("Stack Overflow!!");
  }
  else
  {
    printf("Enter the number to be pushed::");
    scanf("%d", &x);
    stack[++top] = x;
  }
}
void pop()
{
  if (top == -1)
  {
    printf("Stack Underflow!!");
  }
  else
  {
    printf("Element popped is %d", stack[top--]);
  }
}
void display()
{
  if (top == -1)
  {
    printf("Stack Underflow");
  }
  else
  {
    printf("Stack is \n");
    for (int i = top; i >= 0; i--)
    {
      printf("%d\n", stack[i]);
    }
  }
}
void main()
{
  printf("Enter the size of stack:");
  scanf("%d", &size);
  printf(" Operations \n 1.Push\t2.Pop\t3.Display\t4.Exit");
  do
  {
    printf(" \n Enter  your choice :");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
    {
      push();
      break;
    }
    case 2:
    {
      pop();
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
}