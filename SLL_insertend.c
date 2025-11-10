#include <stdio.h>
#include <stdlib.h>
struct ss {
    int data;
    struct ss* next;
};
struct ss* createNode(int value) {
    struct ss* newNode = (struct ss*)malloc(sizeof(struct ss));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void ie(struct ss** head, int value) {
    struct ss* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct ss* temp = *head;   
    while (temp->next != NULL) {
        temp = temp->next;     
    }
    temp->next = newNode;      
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
    ie(&head, 10); 
    ie(&head, 20);  
    ie(&head, 30); 
    printf("Linked List after insertion at end:\n");
    display(head);
    return 0;
}