#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isFull() {
    return (front == (rear + 1) % MAX);
}

int isEmpty() {
    return (front == -1);
}

void enqueue(int value) {
    if (isFull())
        printf("Queue Overflow!\n");
    else {
        if (isEmpty())
            front = 0;
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("%d enqueued.\n", value);
    }
}

void dequeue() {
    if (isEmpty())
        printf("Queue Underflow!\n");
    else {
        printf("%d dequeued.\n", queue[front]);
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    enqueue(50);
    display();
    return 0;
}
