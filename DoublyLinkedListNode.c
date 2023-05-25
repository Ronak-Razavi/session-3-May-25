#include <stdio.h>
#include <stdlib.h>

// Create a new node_t structure.
struct node {
    struct node* prev;
    int data;
    struct node* next;
};

int main() {
    // Create one new node
    struct node* head = malloc(sizeof(struct node));

head->prev=Null;
head->data=10;
head->next=Null;
    
    return 0;
}

