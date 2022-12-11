#include"link.h"
int kth(struct node **start,int k)
{
    struct node*p,*q;
    int x=0;
    p=*start;
    int i=1;
    while(i<=k)
    {
        i+=1;
        p=p->Next;
    }
    q=*start;
    if(p!=NULL)
    {
    while(p->Next!=NULL)
    {
        q=q->Next;
        p=p->Next;
    }
    x=q->Next->info;
    DelAft(&q);
    }
    else
    {
        x=(*start)->info;
        DelBeg(start);
    }
return x;
}
void main()
{
    struct node *start;
    int p;
    start=NULL;
    InsBeg(&start,1);
    InsEnd(&start,2);
    InsEnd(&start,3);
    InsEnd(&start,4);
    InsEnd(&start,5);
    InsEnd(&start,6);
    p=kth(&start,6);
    Traverse(&start);
    printf("\n%d",p);
}