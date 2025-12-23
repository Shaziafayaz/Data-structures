#include <stdio.h>
#define MAX 50
int bst[MAX];
void initBST() {
    for (int i = 0; i < MAX; i++)
        bst[i] = -1;
}
void insert(int index, int value) {
    if (index >= MAX) {
        printf("Tree overflow\n");
        return;
    }
    if (bst[index] == -1) {
        bst[index] = value;
        return;
    }
    if (value < bst[index])
        insert(2 * index + 1, value);
    else if (value > bst[index])
        insert(2 * index + 2, value);
}
void inorder(int index) {
    if (index >= MAX || bst[index] == -1)
        return;
    inorder(2 * index + 1);
    printf("%d ", bst[index]);
    inorder(2 * index + 2);
}
int main() {
    initBST();
    int elements[] = {50, 30, 70, 20, 40, 60, 80};
    int n = 7;
    for (int i = 0; i < n; i++)
        insert(0, elements[i]);
    printf("Inorder Traversal of BST: ");
    inorder(0);
    return 0;
}