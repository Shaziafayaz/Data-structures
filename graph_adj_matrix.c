#include <stdio.h>

#define MAX 10

int adj[MAX][MAX];
int vertices;

// Initialize matrix
void initMatrix() {
    for (int i = 0; i < vertices; i++)
        for (int j = 0; j < vertices; j++)
            adj[i][j] = 0;
}

// Add edge
void addEdge(int src, int dest) {
    adj[src][dest] = 1;
    adj[dest][src] = 1;   // Remove this line for directed graph
}

// Display matrix
void displayMatrix() {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}

int main() {
    vertices = 4;

    initMatrix();

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(0, 3);
    addEdge(1, 3);
    addEdge(2, 3);

    displayMatrix();

    return 0;
}