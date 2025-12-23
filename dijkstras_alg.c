#include <stdio.h>

#define MAX 10
#define INF 9999

int main() {
    int n, source;
    int graph[MAX][MAX];
    int distance[MAX];
    int visited[MAX];
    int i, j, count, min, u;

    
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    
    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    
    printf("Enter source vertex: ");
    scanf("%d", &source);

    
    for (i = 0; i < n; i++) {
        distance[i] = INF;
        visited[i] = 0;
    }

    distance[source] = 0;

    // Dijkstra's Algorithm
    for (count = 0; count < n - 1; count++) {
        min = INF;

        /
        for (i = 0; i < n; i++) {
            if (!visited[i] && distance[i] < min) {
                min = distance[i];
                u = i;
            }
        }

        visited[u] = 1;

        
        for (j = 0; j < n; j++) {
            if (!visited[j] &&
                graph[u][j] != 0 &&
                distance[u] + graph[u][j] < distance[j]) {

                distance[j] = distance[u] + graph[u][j];
            }
        }
    }

    
    printf("\nShortest distances from source vertex %d:\n", source);
    for (i = 0; i < n; i++) {
        printf("Vertex %d : %d\n", i, distance[i]);
    }

    return 0;
}