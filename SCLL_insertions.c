#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Display the circular linked list
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// Insert at beginning
void insertAtBeginning(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    struct Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

// Insert at end
void insertAtEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    struct Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

// Insert at any position 
void insertAtPosition(int data, int position) {
    if (position == 1) {
        insertAtBeginning(data);
        return;
    }

    struct Node* newNode = createNode(data);
    struct Node* temp = head;

    for (int i = 1; i < position - 1 && temp->next != head; i++)
        temp = temp->next;

    if (temp->next == head && position > 1) {
        insertAtEnd(data);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Main function to test insertions
int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    printf("After insertion at end: ");
    display();

    insertAtBeginning(5);
    printf("After insertion at beginning: ");
    display();

    insertAtPosition(25, 4);
    printf("After insertion at position 4: ");
    display();

    insertAtPosition(1, 1);
    printf("After insertion at position 1: ");
    display();

    return 0;
}
