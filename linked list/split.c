#include"link.h"
struct node * split(struct node **start)
{
    struct node*p,*q,*start2;
    p=*start;
    q=p->Next;
    while(q!=NULL && (q->Next)!=NULL)
    {
        p=p->Next;
        q=q->Next;
        q=q->Next;
    }
    start2=p->Next;
    p->Next=NULL;
    return start2;
}
void main()
{
    struct node *start,*p;
    InsBeg(&start,1);
    InsEnd(&start,2);
    InsEnd(&start,3);
    InsEnd(&start,4);
    InsEnd(&start,5);
    InsEnd(&start,6);
    p=split(&start);
    Traverse(&start);
    printf("\n");
    Traverse(&p);
}