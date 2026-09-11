#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Node
{
    int vertex;
    struct Node *next;
};

struct Graph
{
    int numVertices;
    struct Node *adjList[MAX];
};

int Visited[MAX];

struct Node *createnewnode(int x)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->vertex = x;
    newnode->next = NULL;
    return newnode;
}

struct Graph *createGraph(int vertices)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;
    for (int i = 0; i < vertices; i++)
    {
        graph->adjList[i] = NULL;
    }
    return graph;
}

void addEdge(struct Graph *graph, int src, int dest)
{
    struct Node *newnode = createnewnode(dest);
    newnode->next = graph->adjList[src];
    graph->adjList[src] = newnode;

    newnode = createnewnode(src);
    newnode->next = graph->adjList[dest];
    graph->adjList[dest] = newnode;
}

void printGraph(struct Graph *graph)
{
    printf("Adjacency List :\n");
    for (int i = 0; i < graph->numVertices; i++)
    {
        struct Node *temp = graph->adjList[i];
        printf("Vertex %d: ", i);
        while (temp != NULL)
        {
            printf("-> %d ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

void DFS(struct Graph *graph, int vertex)
{
    Visited[vertex] = 1;
    printf("%d ", vertex);

    struct Node *temp = graph->adjList[vertex];
    while (temp != NULL)
    {
        int neighbor = temp->vertex;
        if (!Visited[neighbor])
        {
            DFS(graph, neighbor);
        }
        temp = temp->next;
    }
}

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (front == -1)
    {
        front = 0;
    }
    queue[++rear] = value;
}

int dequeue()
{
    return queue[front++];
}

int isEmpty()
{
    return (front == -1 || front > rear);
}

void BFS(struct Graph *graph, int startVertex)
{
    front =  -1;
    rear = -1;

    Visited[startVertex] = 1;
    enqueue(startVertex);

    while (!isEmpty())
    {
        int current = dequeue();
        printf("%d ", current);

        struct Node *temp = graph->adjList[current];
        while (temp != NULL)
        {
            int neighbor = temp->vertex;
            if (!Visited[neighbor])
            {
                Visited[neighbor] = 1;
                enqueue(neighbor);
            }
            temp = temp->next;
        }
    }
}

int main()
{

    struct Graph *graph = createGraph(5);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);

    printGraph(graph);

    for (int i = 0; i < graph->numVertices; i++)
    {
        Visited[i] = 0;
    }
    printf("\nDFS traversal: ");
    DFS(graph, 0);

    for (int i = 0; i < graph->numVertices; i++)
    {
        Visited[i] = 0;
    }
    printf("\nBFS traversal: ");
    BFS(graph, 0);

    printf("\n");
    return 0;
}