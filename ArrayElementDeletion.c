#include<stdio.h>
int main(){
    int i,size,pos;
    printf("Enter the sie of array:");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        printf("Array[%d]=",i+1);
        scanf("%d",&array[i]);
    }
    printf("Given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d  ",array[i]);
    }
    printf("\nEnter the position from which the element is supposed to be deleted::");
    scanf("%d",&pos);
    for(i=pos-1;i<size;i++)
    {
        array[i]=array[i+1];
    }
    size--;
    printf("The new array is :");
     for(i=0;i<size;i++)
    {
        printf(" %d  ",array[i]);
       
    }
    return 0;
    
}