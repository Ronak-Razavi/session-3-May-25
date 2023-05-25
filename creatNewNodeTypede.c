#include <stdio.h>
#include <string.h>

typedef struct NODE {
   int data;
   struct NODE *next;
} node;

int main( ) {

  node newNode;

  newNode.data = 10;


   return 0;
}