#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void preorder(struct Node* root) {
    if (root == NULL)
        return;

    struct Node* stack[50];
    int top = -1;

    stack[++top] = root;

    while (top != -1) {
        struct Node* curr = stack[top--];

        printf("%d ", curr->data);

        if (curr->right != NULL)
            stack[++top] = curr->right;

        if (curr->left != NULL)
            stack[++top] = curr->left;
    }
}

int main() {
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("Preorder Traversal: ");
    preorder(root);

    return 0;
}