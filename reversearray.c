#include<stdio.h>
#include<string.h>
char array[50];
char rev[50];
int i ;

int main (){
    printf("Enter the array of characters:");
    scanf("%s",array);
    printf(" OG array = %s \n",array);
     
    int size = strlen(array);
    
    for( i = 0; i<size/2; i++){
        char temp = array[i];
        array[i] = array[size-1-i];
        array[size-1-i] = temp;
    }
    printf("New/Reversed Array is %s",array);


}