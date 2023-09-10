#include <stdio.h>
#include <ctype.h>
int stack[50];
int top = -1, i;
void push(int x)
{
    stack[++top] = x;
}
int pop()
{
    return stack[top--];
}
int main()
{
    int num, n1, n2, n3;
    char exp[20];
    char *e;
    printf("Enter the expression :");
    scanf("%s", exp);
    e = exp;
    while (*e != '\0')
    {
        if (isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            n3 = 0;
            switch (*e)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n1 - n2;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n1 / n2;
                break;
            }
            default:
            {
                printf("Enter the correct expression!!");
                break;
            }
            }
            push(n3);
        }
        e++;
    }
    printf("\n The result of the expression is %s = %d ", exp, pop());
    return 0;
}