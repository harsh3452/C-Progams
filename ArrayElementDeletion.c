#include <stdio.h>

int main() {
    int i, size, pos;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    // Declare an array with a fixed size
    int array[100]; // You can choose a maximum size you need

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Array[%d] = ", i + 1);
        scanf("%d", &array[i]); // Use & to get the address of array elements
    }

    printf("Enter the position from which the element is supposed to be deleted: ");
    scanf("%d", &pos);

    if (pos >= 0 && pos < size) {
        for (i = pos; i < size - 1; i++) {
            array[i] = array[i + 1];
        }

        size--; // Decrease the size of the array

        printf("The new array is:\n");
        for (i = 0; i < size; i++) {
            printf("Array[%d] is %d\n", i + 1, array[i]);
        }
    } else {
        printf("Invalid position entered.\n");//If entered position is more than size
    }

    return 0;
}
