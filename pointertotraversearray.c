#include<stdio.h>
int main(){
    int array[] = {2,43,244,35,3,43,5,64,45,44657,554};
    int *ptr = array;
    for(int i = 0; i<(sizeof(array)/sizeof(array[0])); i++){
        printf("%d \n",*ptr);
        ptr++;
    }
}