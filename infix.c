#include <stdio.h>
#include <ctype.h>

#define MAX_STACK 50

char stack[MAX_STACK];
int top = -1;

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0; // Default precedence for other characters
}

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    return stack[top--];
}

int isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void infixToPostfix(char *in)
{
    char *e = in;

    while (*e != '\0')
    {
        if (isalnum(*e))
        {
            printf("%c", *e);
            e++;
        }
        else if (*e == '(')
        {
            push(*e++);
        }
        else if (*e == ')')
        {
            while (top >= 0 && stack[top] != '(')
            {
                printf("%c", pop());
            }
            if (top >= 0 && stack[top] == '(')
            {
                pop(); // Remove the '(' from the stack
            }
            e++;
        }
        else if (isOperator(*e))
        {
            while (top >= 0 && precedence(stack[top]) >= precedence(*e))
            {
                printf("%c", pop());
            }
            push(*e++);
        }
    }

    while (top >= 0)
    {
        printf("%c", pop());
    }

    printf("\n");
}

int main()
{
    char infix[50];
    printf("Enter the infix expression: ");
    scanf("%s", infix);

    printf("Infix Expression: %s\n", infix);
    printf("Postfix Expression: ");
    infixToPostfix(infix);

    return 0;
}
