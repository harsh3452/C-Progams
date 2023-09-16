#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any two integers:");
    scanf("%d %d", &a, &b);
    printf("The addition of the %d and %d is %d.", a, b, a + b);
    return 0;
}