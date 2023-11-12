#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    //declaring nodes
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    //allocating memory using malloc
    head = (struct node *)malloc(sizeof(struct node)); 
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    //assigning value to nodes
    head->data = 1;
    second->data = 2;
    third->data = 3;

    //assigning links to next nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    struct node* current = head;
    while(current != NULL){
        printf("%d -> ",current->data);
        current = current->next;

    }
    printf("NULL");
    return 0;
}