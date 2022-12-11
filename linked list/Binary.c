#include<stdio.h>
#include"link.h"
struct node *middle(struct node **start)
{
    struct node *p,*q;
    p=*start;
    q=p;
    while(q!=NULL && q->Next!=NULL)
    {
        p=p->Next;
        q=q->Next->Next;
    }
    return p;
}
struct node *binary(struct node **start,int x)
{
    struct node*p,*m;
    p=*start;
    while(p->Next!=NULL)
    {
        m=middle(&p);
        if(m->info==x)
        return m;
        else if(m->info<x)
        {
            p=m;     
        }
        else
        {
            m->Next=NULL;
            if( (*start)->Next==m && ((*start)->info)==x )
            {
                p=*start;
                return p;
            }
            else if((*start)->Next==m && (*start)->info!=x)
                return NULL;  
        }
    }
    if(p->info==x)
    return p;
    else
    return NULL;
}
void main()
{
    struct node *start,*p;
    start=NULL;
    InsBeg(&start,1);
    InsEnd(&start,2);
    InsEnd(&start,3);
    InsEnd(&start,4);
    InsEnd(&start,5);
    InsEnd(&start,6);
    p=binary(&start,6);
    if(p==NULL)
    printf("%d",p);
    else
    printf("%d %d",p,p->info);
    // p=middle(&start);
    // printf("%d",p->info);
}