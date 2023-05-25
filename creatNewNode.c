#include <stdio.h>
#include <stdlib.h>

// Create a new node_t structure.
struct node {
    int data;
    struct node* next;
};

int main() {
    // Create one new node
    struct node* newNode = malloc(sizeof(struct node));

    printf("size of each node in bytes is: %lu\n", sizeof(struct node));

    free(newNode);
    return 0;
}