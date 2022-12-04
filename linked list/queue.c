#include"link.h"
int enqueue(struct node**START,int x){
    InsEnd(START,x);
    return 0;
}
//Dequeue
int dequeue(struct node**START){
    int x=DelBeg(START);
    return x;
}
void main()
{
    struct node *rear,*front;
    int x;
    rear=NULL;
    enqueue(&rear,100);
    enqueue(&rear,200);
    enqueue(&rear,300);
    enqueue(&rear,500);
    Traverse(&rear);
    printf("\n");
    x=dequeue(&rear);
    printf("%d ",x);
    x=dequeue(&rear);
    printf("%d ",x);
    x=dequeue(&rear);
    printf("%d ",x);
}