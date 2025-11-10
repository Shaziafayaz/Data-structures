// C program to create a single linked list and perform insertion at the beginning  

#include <stdio.h>
#include <stdlib.h>
struct ss {
    int data;
    struct ss* next;
};
struct ss* createNode(int value) {
    struct ss*newNode=(struct ss*)malloc(sizeof(struct ss));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void in(struct ss** head, int value) {
    struct ss* newNode = createNode(value);
    newNode->next = *head;  
    *head = newNode; 
}
void display(struct ss* head) {
    struct ss* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct ss* head = NULL;
    in(&head, 30);
    in(&head, 20); 
    in(&head, 10); 
    printf("Linked List after insertion at beginning:\n");
    display(head);
    return 0;
}