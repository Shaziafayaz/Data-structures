#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty() {
    return top == -1;
}

int main() {
    if (isEmpty())
        printf("Stack Underflow!\n");
    else
        printf("Stack has elements.\n");
    return 0;
}
