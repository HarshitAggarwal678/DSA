#include<stdio.h>
#include"link.h"
struct node* duplicate(struct node**start)
{
    struct node *p,*q,*r;
    p=*start;
    
    while(p!=NULL)
    {
        q=p->Next;
        r=p;
        while(q!=NULL)
        {
            if(p->info==q->info)
            {
                q=q->Next;
                DelAft(&r);
            }
            else
            {
                q=q->Next;
                r=r->Next;
            }
        }
        p=p->Next;
        
    }
    return *start;
}
void main()
{
    struct node *start;
    start=NULL;
    InsBeg(&start,100);
    InsEnd(&start,100);
    InsEnd(&start,200);
    InsEnd(&start,400);
    InsEnd(&start,100);
    InsEnd(&start,500);
    InsEnd(&start,400);
    duplicate(&start);
    Traverse(&start);
}