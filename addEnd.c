#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* next;
} node;

node* newNode(int data) {
    node* output = (node*)malloc(sizeof(node));
    output->data = data;
    output->next = NULL;
    return output;
}

void addEnd(node* head, node* newNode) {
    node* current;
    for (current = head; current->next != NULL; current = current->next)
        ;
    current->next = newNode;
}

void print(node* head) {
    int i = 0;
    node* current = head;
    while (current != NULL) {
        printf("Data of node %d is %d\n", i, current->data);
        i++;
        current = current->next;
    }
}

int main() {
    node* head = newNode(12);
    addEnd(head, newNode(0));
    addEnd(head, newNode(16));
    addEnd(head, newNode(2));
    addEnd(head, newNode(7));
    print(head);
    return 0;
}
