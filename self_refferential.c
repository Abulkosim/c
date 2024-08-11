#include <stdio.h>
#include <stdlib.h>

// Define the struct node
struct node {
    int data;
    struct node *next; // Self-referential pointer
};

int main() {
    // Create nodes
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    // Initialize nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Print the linked list
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("Data: %d\n", ptr->data);
        ptr = ptr->next;
    }

    // Free allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}