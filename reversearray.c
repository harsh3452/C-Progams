#include<stdio.h>
#include<string.h>
char array[50];
char rev[50];
int i ;

int main (){
    printf("Enter the array of characters:");
    scanf("%s",array);
    printf("OG array = %s \n",array);
     
    int size = strlen(array); //getting length of array
    
    for( i = 0; i<size/2; i++){
        char temp = array[i]; //Assigning first element of array to temp
        array[i] = array[size-1-i]; // assigning last element of array at pos size-i-1 to first element i=0
        array[size-1-i] = temp; // assigning temp value to last postition size-i-1
    }
    printf("New/Reversed Array is %s",array);


}