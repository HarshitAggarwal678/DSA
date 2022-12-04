#include"link.h"
void enqueue(struct node**rear,struct node**front,int x)
{
    if((*rear)==NULL)
    {
        InsBeg(rear,x);
        *front=*rear;
    }
    else
    {
        InsAft(rear,x);
        *rear=(*rear)->Next;
    }
}
int dequeue(struct node**rear,struct node**front)
{
    int x;
    if(*front==NULL)
    {
        printf("deletion is not possible");
        exit(1);
    }
    else
    {
    x=DelBeg(front);
    if((*front)==NULL)
    {
        *rear=NULL;
    }
    return x;
    }
    
}
void main()
{
    struct node *rear,*front;
    int x;
    front=NULL;
    rear=NULL;
    enqueue(&rear,&front,100);
    enqueue(&rear,&front,200);
    enqueue(&rear,&front,300);
    enqueue(&rear,&front,500);
    Traverse(&front);
    printf("\n");
    x=dequeue(&rear,&front);
    printf("%d ",x);
    x=dequeue(&rear,&front);
    printf("%d ",x);
    x=dequeue(&rear,&front);
    printf("%d\n",x);
}