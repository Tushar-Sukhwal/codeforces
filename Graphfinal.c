#include <stdio.h>
#include <stdlib.h>
#define max 100

typedef struct Queue {
  int arr[max];
  int front;
  int rear;
} Queue;

typedef struct Graph {
  int adjMatrix[max][max];
} Graph;

void enqueue(int x, Queue *q) {
  if (q->rear == max - 1) {
    printf("Queue Overflow\n");
    return;
  }
  q->rear++;
  q->arr[q->rear] = x;
}

int dequeue(Queue *q) {
  if (q->front > q->rear) {
    printf("Queue Underflow\n");
    return -1;
  }
  int x = q->arr[q->front];
  q->front++;
  return x;
}

int isEmpty(Queue *q) {
  return q->front > q->rear;
}

int bfs(Graph *g, int node) {
  int visited[max] = {0};

  Queue *q = malloc(sizeof(Queue));
  q->front = 0;
  q->rear = -1;

  enqueue(node, q);
  visited[node] = 1;

  while (!isEmpty(q)) {
    int x = dequeue(q);
    printf("%d ", x);

    for (int i = 0; i < max; i++) {
      if (visited[i] != 1 && g->adjMatrix[x][i] == 1) {
        enqueue(i, q);
        visited[i] = 1;
      }
    }
  }

  free(q);
  return visited[node];
}

Graph *createGraph() {
  Graph *g = malloc(sizeof(Graph));

  for (int i = 0; i < max; i++) {
    for (int j = 0; j < max; j++) {
      g->adjMatrix[i][j] = 0;
    }
  }

  return g;
}

Graph *insertNodeToGraph(int u, int v, Graph *g) {
  g->adjMatrix[u][v] = 1;
  g->adjMatrix[v][u] = 1;
  return g;
}

Graph* takeInput  () {
  Graph *g = createGraph();
  printf("enter the node data \n");
  int u , v ; 
  while(1){
    scanf("%d",&u) ; 
    if(u == -1 ) {
      break ;
    }
    scanf("%d",&v) ; 
    insertNodeToGraph(u,v,g);
  }
  return g ; 

}




int main() {

  Graph* g = takeInput() ; 

  bfs(g, 2);

  free(g);
  return 0;
}