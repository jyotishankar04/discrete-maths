// WAP for representing of graph using adjacency Matrix
#include <stdio.h>
#define v 4
// Initialize the matrix to zero
void initialize(int arr[][v])
{
    int i, j;
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            arr[i][j] = 0;
        }
    }
}

// add edges
void addEdges(int arr[][v], int i, int j)
{
    arr[i][j] = 1;
    arr[j][i] = 1;
}
// print all the matrix
void printAdjMatrix(int arr[][v])
{
    int i, j;
    for (i = 0; i < v; i++)
    {
        printf("%d :", i);
        for (j = 0; j < v; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int adjMatrix[v][v];
    initialize(adjMatrix);
    addEdges(adjMatrix, 0, 1);
    addEdges(adjMatrix, 0, 2);
    addEdges(adjMatrix, 1, 2);
    addEdges(adjMatrix, 2, 0);
    addEdges(adjMatrix, 2, 3);
    printAdjMatrix(adjMatrix);
    return 0;
}
