#include <stdio.h>
int main()
{
    double first, second;
    char op;
    printf("Enter any one of the following operators (+,-,*,/):");
    scanf("%c", &op);
    printf("Enter the two operands:");
    scanf("%lf%lf", &first, &second);
    switch (op)
    {
    case '+':
        printf("%lf+%lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%lf+%lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%lf+%lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%lf+%lf = %.1lf", first, second, first / second);
        break;
    default:
        printf("Error! ");
    }
    return 0;
}
