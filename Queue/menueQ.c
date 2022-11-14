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
/*************/
int isempty(struct Queue *q)
{
    if (((q->rear)-(q->front)+1)==0)
    return TRUE;
    else
    return FALSE;
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
/*************/
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
/*************/
void main()
{
    struct Queue q;
    int c=1;
    int n=0;
    initialise(&q);
    printf("enter 1 to enqueue\n");
    printf("enter 2 to dequeue\n");
    printf("enter 3 to check empty\n");
    while(c)
    {
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            {
                char x;
                printf("enter the character to be enqueues\n");
                scanf(" %c",&x);
                enqueue(&q,x);
                //printf("enter the character to be enqueues\n");
                break;
            }
            case 2:
            {
                printf("%c\n",dequeue(&q));
                break;
            }
            case 3:
            {
                printf("%d",isempty(&q));
                break;
            }
            default:
            {
                printf("Wrong input\n");
                break;
            }
        }
    printf("enter 1 to give more choice or else 0 to exit");
    scanf("%d",&c);
    }
}