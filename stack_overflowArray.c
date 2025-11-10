#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = MAX - 1;  // Stack already full

int isFull() {
    return top == MAX - 1;
}

int main() {
    if (isFull())
        printf("Stack Overflow!\n");
    else
        printf("You can still push elements.\n");
    return 0;
}
