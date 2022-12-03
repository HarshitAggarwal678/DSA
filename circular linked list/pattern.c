#include"primitive.h"
struct node *pattern(struct node**p)
{
    struct node *q,*r;
    r=(*p)->Next;
    int sum=0;
    while(r!=*p)
    {
        sum=r->info+sum;
        r=r->Next;
    }
    sum=r->info+sum;
    q=(*p)->Next;
    while(q!=*p)
    {
        q->info=sum-(q->info);
        q=q->Next;
    }
    q->info=sum-q->info;
    return *p;

}
void main()
{
    struct node *cstart,*a;
    InsBeg(&cstart,5);
    InsBeg(&cstart,4);
    InsBeg(&cstart,3);
    InsBeg(&cstart,2);
    InsBeg(&cstart,1);
    InsEnd(&cstart,1);
    a=pattern(&cstart);
    Traverse(&a);
}