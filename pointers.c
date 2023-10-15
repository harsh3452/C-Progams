#include <stdio.h>

int main() {
    int num = 42;
    int *ptr; // Declare a pointer to an integer

    ptr = &num; // Assign the address of 'num' to the pointer

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of num through pointer: %d\n", *ptr);

    return 0;
}
