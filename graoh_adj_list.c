#include <stdio.h>
#include <stdlib.h>

// Adjacency list node
struct Node {
    int vertex;
    struct Node* next;
};

// Graph structure
struct Graph {
    int vertices;
    struct Node** adjList;
};

// Create a node
struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Create graph
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;

    graph->adjList = (struct Node**)malloc(vertices * sizeof(struct Node*));

    for (int i = 0; i < vertices; i++)
        graph->adjList[i] = NULL;

    return graph;
}

// Add edge (Undirected)
void addEdge(struct Graph* graph, int src, int dest) {
    // Add edge src → dest
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    // Add edge dest → src
    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

// Print graph
void printGraph(struct Graph* graph) {
    for (int v = 0; v < graph->vertices; v++) {
        struct Node* temp = graph->adjList[v];
        printf("Vertex %d: ", v);
        while (temp) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    struct Graph* graph = createGraph(4);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);

    printGraph(graph);

    return 0;
}