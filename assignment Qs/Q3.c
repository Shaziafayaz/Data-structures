#include <stdio.h>

#define MAX 10

int s1[MAX], s2[MAX];
int top1 = -1, top2 = -1;

void push(int stack[], int *top, int value) {
    (*top)++;
    stack[*top] = value;
}

int pop(int stack[], int *top) {
    int value = stack[*top];
    (*top)--;
    return value;
}

void enqueue(int value) {
    push(s1, &top1, value);
    printf("Enqueued: %d\n", value);
}

void dequeue() {
    int i;

    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
        return;
    }

    if (top2 == -1) {
        while (top1 != -1) {
            push(s2, &top2, pop(s1, &top1));
        }
    }

    printf("Dequeued: %d\n", pop(s2, &top2));
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}