#include <stdio.h>

int fibonacci(int n);

int main()
{
    int count, i;

    printf("Enter the number of terms: ");
    scanf("%d", &count);

    printf("Fibonacci Series: ");

    for (i = count; i > 0; i--)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
