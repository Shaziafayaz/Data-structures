#include <stdio.h>
#include <stdlib.h>

// BST node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert into BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Inorder traversal (gives sorted order)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Search in BST
int search(struct Node* root, int key) {
    if (root == NULL)
        return 0;

    if (root->data == key)
        return 1;
    else if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    struct Node* root = NULL;

    int elements[] = {50, 30, 70, 20, 40, 60, 80};
    int n = 7;

    // Insert elements
    for (int i = 0; i < n; i++)
        root = insert(root, elements[i]);

    printf("Inorder Traversal: ");
    inorder(root);

    int key = 60;
    if (search(root, key))
        printf("\n%d found in BST", key);
    else
        printf("\n%d not found in BST", key);

    return 0;
}
