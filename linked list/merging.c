#include"link.h"
struct node* merging(struct node**start1,struct node**start2)
{
    struct node *p,*q;
    p=*start1;
    q=*start2;
    int m,n;
    m=count(&p);
    n=count(&q);
    if(m>n)
    {
        for(int i=0;i<(m-n);i++)
        {
            p=p->Next;
        }
    }
    else
    {
        for(int i=0;i<(n-m);i++)
        {
            q=q->Next;
        }
    }
    while( p!=NULL && (p->info)!=(q->info) )
    {
        p=p->Next;
        q=q->Next;
    }
    if(p!=NULL)
    return p;
    else
    return NULL;
}
void main()
{
    struct node *start,*start1,*p,*q,*a;
    start=NULL;
    start1=NULL;
    InsBeg(&start,3);
    InsEnd(&start,6);
    InsEnd(&start,9);
    InsEnd(&start,15);
    InsEnd(&start,30);

    InsBeg(&start1,10);

    p=start;
    while(p->info!=15)
    {
        p=p->Next;
    }
    q=start1;
    while(q->Next=NULL)
    {
        q=q->Next;
    }
    q->Next=p;
    Traverse(&q);
    a=merging(&p,&q);
    if(a!=NULL)
    printf("\n%d",a->info);
    else
    printf("\n%d",a);
}
