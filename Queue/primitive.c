#include<stdio.h>
#include<stdlib.h>
#define Queuesize 10
#define FALSE 0
#define TRUE 1
struct Queue
{
    char item[Queuesize];
    int front;
    int rear;
};
/*************/
void initialise(struct Queue *q)
{
q->front=0;
q->rear=-1;
}
int isempty(struct Queue *q)
{
    if (((q->rear)-(q->front)+1)==0)
    return 1;
    else
    return 0;
}
/*************/
void enqueue(struct Queue *q,char x)
{
    if(q->rear==Queuesize-1)
    {
        printf("queue overflows");
        exit(1);
    }
    q->rear++;
    q->item[q->rear]=x;
}
char dequeue(struct Queue *q)
{char x;
    if(isempty(q))
    {
        printf("queue overflows");
        exit(1);
    }
    x=q->item[q->front];
    q->front++;
    return x;
}

void main()
{
    struct Queue q;
    initialise(&q);
    enqueue(&q,'A');
    printf("%c",dequeue(&q));
    printf("enter 1 to enqueue");
    printf("enter 2 to dequeue");
    printf("enter 3 to check empty");
}