#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define max 40

typedef struct stack
{
    int arr[max];
    int top;
} stk;

typedef struct queue
{
    int arr[max];
    int front;
    int rear;
} que;

void enqueue(que *s, int data)
{
    if (s->front == 0 && s->rear == max - 1)
    {
        printf("Overflow\n");
    }
    else if (s->front == -1 && s->rear == -1)
    {
        s->front = s->rear = 0;
        s->arr[s->rear] = data;
    }
    else
    {
        s->rear = (s->rear + 1) % max;
        s->arr[s->rear] = data;
    }
}

int dequeue(que *s)
{
    int val;
    if (s->front == -1 && s->rear == -1)
    {
        printf("Underflow/n");
        return -9999;
    }
    else
    {
        val = s->arr[s->front];
        if (s->front == s->rear)
        {
            s->front = s->rear = -1;
        }
        else
        {
            s->front = (s->front + 1) % max;
        }
        return val;
    }
}

int emptyque(que *s)
{
    if (s->front == -1 && s->rear == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(stk *s, int data)
{
    if (s->top == max - 1)
    {
        printf("Overflow");
        return;
    }
    s->top++;
    s->arr[s->top] = data;
}

int pop(stk *s)
{
    int temp;
    if (s->top == -1)
    {
        printf("Underflow");
        exit(0);
    }
    temp = s->arr[s->top];
    s->top--;

    return temp;
}

int isEmpty(stk *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}  

void DFS(int arr[7][7] , int sv ){
	stk s;
	s.top= -1;
	int visited[7] = {0,0,0,0,0,0,0} ;
	push(&s,sv);
	visited[sv] = 1 ;
	
	while( !isEmpty(&s)){
		int visit = pop(&s);
		printf("%d ",visit);
		for(int i=0;i<7;i++){
			if(arr[visit][i] == 1 && visited[i] == 0){
				push(&s,i);
				visited[i] = 1 ;
			}
		}
	}	
}

void BFS(int arr[7][7],int s){
	int visited[7]={0,0,0,0,0,0,0};
	que q;
	q.front=q.rear=-1;
	enqueue(&q,s);
	visited[s]=1;
	
	while(!emptyque(&q)){
		int visit=dequeue(&q);
		printf("%d ",visit);
		for(int i=0;i<7;i++){
            
			if(visited[i]==0&&arr[visit][i]==1){
				enqueue(&q,i);
				visited[i]=1;
			}
		}
	}
}

int main(){

	
	int arr[7][7] = {
        {0, 1, 1, 0, 0, 0, 0},
        {1, 0, 1, 1, 1, 0, 0},
        {1, 1, 0, 0, 0, 0, 1},
        {0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 0, 0, 1, 0},
        {0, 0, 0, 1, 1, 0, 0},
        {0, 0, 1, 0, 0, 0, 0}};
	
	
	DFS(arr,1);
	printf("\n");
	BFS(arr,1);

	

	return 0;
}