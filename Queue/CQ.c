#include<stdio.h>
#include<stdlib.h>
#define CQueuesize 10
#define FALSE 0
#define TRUE 1
struct CQueue
{
    char item[CQueuesize];
    int front;
    int rear;
};
/*************/
void initialise(struct CQueue *cq)
{
cq->front=CQueuesize-1;
cq->rear=CQueuesize-1;
}
int isempty(struct CQueue *cq)
{
    if (cq->rear==cq->front)
    return TRUE;
    else
    return FALSE;
}
/*************/
void enqueue(struct CQueue *cq,char x)
{
    if(((cq->rear+1)%CQueuesize)==(cq->front))
    {
        printf("queue overflows");
        exit(1);
    }
    cq->rear=(cq->rear+1)%CQueuesize;
    cq->item[cq->rear]=x;
}
char dequeue(struct CQueue *cq)
    {
        char x;
        if(isempty(cq))
        {
            printf("queue overflows");
            exit(1);
        }
        cq->front=(cq->front+1)%CQueuesize;
        x=cq->item[cq->front];
        return x;
}

void main()
{
    int c=1,n=0;
    struct CQueue q;
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
                break;
            }
            case 2:
            {
                printf("%c\n",dequeue(&q));
                break;
            }
            case 3:
            {
                printf("%d\n",isempty(&q));
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