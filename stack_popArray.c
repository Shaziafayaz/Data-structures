#include <stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30};
int top = 2;  // Index of last pushed element

void pop() {
    if (top == -1)
        printf("Stack Underflow! Cannot pop\n");
    else
        printf("%d popped from stack\n", stack[top--]);
}

int main() {
    pop();
    pop();
    pop();
    pop(); // Underflow check
    return 0;
}

