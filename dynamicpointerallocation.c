#include<stdio.h>
#include<stdlib.h>
int main (){
    int *array;
    int n = 5;
    array = (int *)malloc(n * sizeof(int));

    if(array==NULL){
        printf("Memory allocation failed");
        return -1;
    }
    for(int i = 0; i < n; i ++){
        array[i] = i *100;
    }
     for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, array[i]);
    }
    free(array);
    return 0;
}