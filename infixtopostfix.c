#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STACK 50

char stack[MAX_STACK];
int top = -1;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0; // Default precedence for other characters
}

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void infixToPostfix(char *in, char *out) {
    char *e = in;

    while (*e != '\0') {
        if (isalnum(*e)) {
            *out++ = *e++;
        } else if (*e == '(') {
            push(*e++);
        } else if (*e == ')') {
            while (top >= 0 && stack[top] != '(') {
                *out++ = pop();
            }
            if (top >= 0 && stack[top] == '(') {
                pop(); // Remove the '(' from the stack
            }
            e++;
        } else if (isOperator(*e)) {
            while (top >= 0 && precedence(stack[top]) >= precedence(*e)) {
                *out++ = pop();
            }
            push(*e++);
        }
    }
    
    while (top >= 0) {
        *out++ = pop();
    }
    
    *out = '\0';
}

int main() {
    char infix[50], postfix[50];
    printf("Enter the infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Infix Expression: %s\n", infix);
    printf("Postfix Expression: %s\n", postfix);

    return 0;
}
