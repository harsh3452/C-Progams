#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* create_dll(struct Node* start);
struct Node* insert_beg(struct Node* start, int num);
struct Node* delete_beg(struct Node* start);
struct Node* insert_end(struct Node* start, int num);
struct Node* delete_end(struct Node* start);
void display_dll(struct Node* start);

int main() {
    struct Node* start = NULL;
    int option, num;

    do {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Create a doubly linked list");
        printf("\n 2: Insert at the beginning");
        printf("\n 3: Delete at the beginning");
        printf("\n 4: Insert at the end");
        printf("\n 5: Delete at the end");
        printf("\n 6: Display the doubly linked list");
        printf("\n 7: EXIT");
        printf("\n\n Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                start = create_dll(start);
                printf("\n Doubly Linked List Created");
                break;
            case 2:
                printf("\n Enter data to insert at the beginning: ");
                scanf("%d", &num);
                start = insert_beg(start, num);
                break;
            case 3:
                start = delete_beg(start);
                break;
            case 4:
                printf("\n Enter data to insert at the end: ");
                scanf("%d", &num);
                start = insert_end(start, num);
                break;
            case 5:
                start = delete_end(start);
                break;
            case 6:
                display_dll(start);
                break;
            case 7:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (option != 7);

    return 0;
}

struct Node* create_dll(struct Node* start) {
    struct Node* new_node, *ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\n Enter the data: ");
    scanf("%d", &num);
    while (num != -1) {
        new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data = num;
        if (start == NULL) {
            new_node->prev = NULL;
            new_node->next = NULL;
            start = new_node;
        } else {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->prev = ptr;
            new_node->next = NULL;
        }
        printf("\n Enter the data: ");
        scanf("%d", &num);
    }
    return start;
}

struct Node* insert_beg(struct Node* start, int num) {
    struct Node* new_node;
    new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = num;
    new_node->prev = NULL;
    new_node->next = start;
    if (start != NULL)
        start->prev = new_node;
    start = new_node;
    return start;
}

struct Node* delete_beg(struct Node* start) {
    if (start == NULL) {
        printf("\n Doubly Linked List is empty. Cannot delete from the beginning.\n");
    } else {
        struct Node* temp = start;
        start = start->next;
        if (start != NULL)
            start->prev = NULL;
        free(temp);
        printf("\n Deleted from the beginning.\n");
    }
    return start;
}

struct Node* insert_end(struct Node* start, int num) {
    struct Node* new_node, *ptr;
    new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = num;
    new_node->next = NULL;
    if (start == NULL) {
        new_node->prev = NULL;
        start = new_node;
    } else {
        ptr = start;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = new_node;
        new_node->prev = ptr;
    }
    return start;
}

struct Node* delete_end(struct Node* start) {
    if (start == NULL) {
        printf("\n Doubly Linked List is empty. Cannot delete from the end.\n");
    } else if (start->next == NULL) {
        free(start);
        start = NULL;
        printf("\n Deleted from the end.\n");
    } else {
        struct Node* ptr = start;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->prev->next = NULL;
        free(ptr);
        printf("\n Deleted from the end.\n");
    }
    return start;
}

void display_dll(struct Node* start) {
    struct Node* ptr;
    ptr = start;
    if (ptr == NULL) {
        printf("\n Doubly Linked List is empty.\n");
        return;
    }
    printf("\n Doubly Linked List (forward): ");
    while (ptr->next != NULL) {
        printf("%d <-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d -> NULL\n", ptr->data);

    printf("Doubly Linked List (backward): ");
    while (ptr != NULL) {
        printf("%d <-> ", ptr->data);
        ptr = ptr->prev;
    }
    printf("NULL\n");
}
