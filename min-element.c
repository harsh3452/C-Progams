#include<stdio.h>
int main(){
    int i,size,min;
    printf("Enter the sie of array:");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        printf("Array[%d]=",i+1);
        scanf("%d",&array[i]);
    }
    min = array[0];
    for(i=1;i<size;i++)
    {
        if(min > array[i])
        {
            int temp = min;
            min=array[i];
            array[i]=min;
         }
    }
    printf("The smallest element in the array is %d ",min);
    return 0;

}