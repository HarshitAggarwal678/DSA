#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *Next;
    struct node *Prev;
};
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
void InsBeg(struct node **dstart,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->Prev=NULL;
    p->Next=*dstart;
    if((*dstart)!=NULL)
    {
        (*dstart)->Prev=p;
    }
    *dstart=p;
}
void InsAft(struct node **p,int x)
{
    if((*p)==NULL)
    {
        printf("void Insertion");
        exit(1);
    }
    else
    {
        struct node *q;
        q=GetNode();
        q->info=x;
        q->Prev=*p;
        q->Next=(*p)->Next;
        (*p)->Next=q;
    }
}
void InsBef(struct node **p,int x)
{
    if((*p)==NULL)
    {
        printf("void insertion");
        exit(1);
    }
    else
    {
        struct node *q;
        q=GetNode();
        q->info=x;
        q->Next=*p;
        q->Prev=(*p)->Prev;
        (*p)->Prev->Next=q;
        (*p)->Prev=q;
    }
}
void InsEnd(struct node **dstart,int x)
{
    if((*dstart)==NULL)
    {
        InsBeg(dstart,x);
    }
    else
    {
        struct node *q,*p;
        q=GetNode();
        q->info=x;
        q->Next=NULL;
        p=*dstart;
        while(p->Next!=NULL)
        {
            p=p->Next;
        }
        p->Next=q;
        q->Prev=p;
    }
}
int DelBeg(struct node **dstart)
{
    if((*dstart)==NULL)
    {
        printf("void deletion");
        exit(1);
    }
    else
    {
        int x;
        struct node *p,*r;
        p=(*dstart)->Next;
        p->Prev=NULL;
        x=(*dstart)->info;
        r=*dstart;
        free(r);
        *dstart=p;
        return x;
    }
}
int DelAft(struct node **p)
{
    if((*p)==NULL)
    {
        printf("void deletion");
        exit(1);
    }
    else
    {
        int x;
        struct node *q,*r;
        q=(*p)->Next->Next;
        q->Prev=(*p);
        r=(*p)->Next;
        (*p)->Next=q;
        x=r->info;
        free(r);
    }
}
int DelBef(struct node **p)
{
    if((*p)==NULL)
    {
        printf("void deletion");
        exit(1);
    }
    else
    {
        int x;
        struct node *q,*r;
        q=(*p)->Prev;
        r=q->Prev;
        (*p)->Prev=r;
        r->Next=(*p);
        x=q->info;
        free(q);
        return x;
    }
}
int DelEnd(struct node **dstart)
{
    if((*dstart)==NULL)
    {
        printf("void deletion");
        exit(1);
    }
    else
    {
        int x;
        struct node *q,*r;
        q=(*dstart);
        while(q->Next!=NULL)
        {
            q=q->Next;
        }
        r=q->Prev;
        x=q->info;
        r->Next=NULL;
        free(q);
        return x;
    }
}
int DelSpecfic(struct node **p)
{
    if((*p)==NULL)
    {
        printf("void deletion");
        exit(1);
    }
    else
    {
        int x;
        struct node *q,*r;
        q=(*p)->Prev;
        r=(*p)->Next;
        q->Next=r;
        r->Prev=q;
        x=(*p)->info;
        free((*p));
        return x;
    }
}
void Traverse(struct node **dstart)
{
    struct node *p;
    p=*dstart;
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->Next;
    }
    // while(p->Next!=NULL)
    // {
    //     printf("%d\t",p->info);
    //     p=p->Next;
    // }
    // printf("%d",p->info);
    // printf("\n");
    // while(p!=NULL)
    // {
    //     printf("%d\t",p->info);
    //     p=p->Prev;
    // }
}
void main()
{
    struct node *p,*q;
    int x;
    p=NULL;
    q=NULL;
    InsBeg(&p,4);
    InsEnd(&p,5);
    InsEnd(&p,7);
    InsEnd(&p,8);
    InsEnd(&p,9);
    q=p;
    while(q->info!=7)
    {
        q=q->Next;
    }
    x=DelSpecfic(&q);
    //InsBef(&q,1);
    Traverse(&p);
    printf("\n%d",x);
}
