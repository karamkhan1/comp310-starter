#include <stdio.h>
#include <stdlib.h>

/**
* Objective: Implement a simple linked list with
 * operations to add, delete, and display elements.
 * Note: Do not write a generic linked-list
 * implementation. Just follow the Java solution here
 * and specialize your Node struct (C does not have
 * classes) to use int.
*/

// Structure only consists of an int data variable
// and pointer to the next Node
typedef struct Node {
    int data;
    struct Node *next;
}
// Initialize head to be null but reference it
// as a pointer.
Node;
Node* head = NULL;

void push(int new_data) {
    // To add a node we have to allocate enough memory
    // for the new Node and cast it as a pointer of type
    // Node.
    //** Used chat-gpt to understand memory allocation
    // and the importance of freeing memory when deleting
    Node *new_node = (Node*)malloc(sizeof(Node));
    // Then we do the basic assignments
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void deleteNode(int key) {
    // Initialize temp as head since we start there
    // and prev as null to keep track of previous node
    Node *temp = head, *prev = NULL;

    // If the head is the key then we delete that,
    // do the basic node assignments and return
    if (temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        return;
    }

    // If head isn't the key we search until the
    // previous node is the key
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key isn't found return
    if (temp == NULL) return;

    // Key is found, assign and free
    prev->next = temp->next;
    free(temp);
}

void printList() {
    // Start at head
    Node *tnode = head;
    // Print all the data
    while (tnode != NULL) {
        printf("%d ", tnode->data);
        tnode = tnode->next;
    }
}

void main() {
    push(7);
    push(1);
    push(3);
    push(2);

    printf("\nCreated Linked list is:\n");
    printList();

    deleteNode(1);

    printf("\nLinked List after Deletion of 1:\n");
    printList();
}
