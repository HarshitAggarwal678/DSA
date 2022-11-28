#include <stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *Next;
}; 
/***********************/

/********************/
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
/*******************/
void InsBeg(struct node **START,int x)
{
  struct node *p;
  p=GetNode();
    p->info=x;
  p->Next=*START;
  *START=p;
}
/****************/
void InsAft(struct node **p,int x)
{
    struct node *q;
    q=GetNode();
    q->info=x;
    q->Next=(*p)->Next;
    (*p)->Next=q;
}
/****************/
void InsEnd(struct node **START,int x)
{
  struct node *q,*p;
  q=*START;
  if(q==NULL)
  {
    InsBeg(START,x);
  }
  else
  {
    while(q->Next!=NULL)
    q=q->Next;
    p=GetNode();
    p->info=x;
    p->Next=NULL;
    q->Next=p;
    }
}
/*****************/
void Traverse(struct node **START)
{
struct node *p;
p=*START;
while(p!=NULL)
    {
    printf("%d\t",p->info);
    p=p->Next;
    }
}
void insertat(struct node **START,int x,int y)
{
    struct node *p;
    int c=1;
    p=*START;
    if(x==1)
    InsBeg(START,y);
    else
    {
        while(c!=x-1 &&p!=NULL)
        {
            p=p->Next;
            c++;
        }
        InsAft(&p,y);
    }

}
/****************/
void orderedinsert(struct node **START,int x)
{
    struct node*p,*q;
    p=*START;
    q=NULL;
    while(p!=NULL&&x>=p->info)
    {
        q=p;
        p=p->Next;
    }
    if(q==NULL)
    InsBeg(START,x);
    else
    InsAft(&q,x);

}
struct node* merge(struct node **s1,struct node **s2)
{
    struct node *p,*q,*s3;
    p=*s1;
    q=*s2;
    s3=NULL;
    while (p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
           InsEnd(&s3,p->info);
           p=p->Next; 
        }
        else
        {
            InsEnd(&s3,q->info);
           q=q->Next;
        }
    }
    while (p!=NULL)
    {
        InsEnd(&s3,p->info);
        p=p->Next;
    }
    while (q!=NULL)
    {
        InsEnd(&s3,q->info);
        q=q->Next;
    }
    return s3;
}
struct node* intersect(struct node **s1,struct node **s2)
{
    struct node *p,*q,*s3;
    p=*s1;
    q=*s2;
    s3=NULL;
    while (p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
           p=p->Next; 
        }
        else if(q->info<p->info)
        {
           q=q->Next;
        }
        else
        {
            InsEnd(&s3,q->info);
            q=q->Next;
            p=p->Next;
        }
    }
    return s3;
}
struct node* onlya(struct node **s1,struct node **s2)
{
    struct node *p,*q,*s3;
    p=*s1;
    q=*s2;
    s3=NULL;
    while (p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
            InsEnd(&s3,p->info);
            p=p->Next; 
        }
        else if(q->info<p->info)
        {
           q=q->Next;
        }
        else
        {
            q=q->Next;
            p=p->Next;
        }
    }
    while(p!=NULL)
    {
        InsEnd(&s3,p->info);
        p=p->Next; 
    }
    return s3;
}
struct node* onlyb(struct node **s1,struct node **s2)
{
    struct node *p,*q,*s3;
    p=*s1;
    q=*s2;
    s3=NULL;
    while (p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
            
            p=p->Next; 
        }
        else if(q->info<p->info)
        {
            InsEnd(&s3,q->info);
           q=q->Next;
        }
        else
        {
            q=q->Next;
            p=p->Next;
        }
    }
    while(q!=NULL)
    {
        InsEnd(&s3,q->info);
        q=q->Next; 
    }
    return s3;
}
struct node* symmetric(struct node **s1,struct node **s2)
{
    struct node *p,*q,*s3;
    p=*s1;
    q=*s2;
    s3=NULL;
    while (p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
           InsEnd(&s3,p->info);
           p=p->Next; 
        }
        else if(q->info<p->info)
        {
            InsEnd(&s3,q->info);
            q=q->Next;
        }
        else
        {
            q=q->Next;
            p=p->Next;
        }
        
    }
    while (p!=NULL)
    {
        InsEnd(&s3,p->info);
        p=p->Next;
    }
    while (q!=NULL)
    {
        InsEnd(&s3,q->info);
        q=q->Next;
    }
    return s3;
}
struct node* unione(struct node **s1,struct node **s2)
{
    struct node *p,*q,*s3;
    p=*s1;
    q=*s2;
    s3=NULL;
    while (p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
           InsEnd(&s3,p->info);
           p=p->Next; 
        }
        else if(q->info<p->info)
        {
            InsEnd(&s3,q->info);
            q=q->Next;
        }
        else
        {
            InsEnd(&s3,q->info);
            q=q->Next;
            p=p->Next;
        }
        
    }
    while (p!=NULL)
    {
        InsEnd(&s3,p->info);
        p=p->Next;
    }
    while (q!=NULL)
    {
        InsEnd(&s3,q->info);
        q=q->Next;
    }
    return s3;
}
void main()
{
    struct node *START1,*START2,*p;
    START1=NULL;
    START2=NULL;
    orderedinsert(&START1,100);
    orderedinsert(&START1,200);
    orderedinsert(&START1,300);
    orderedinsert(&START1,400);
    orderedinsert(&START1,500);
    Traverse(&START1);
    printf("\n");
    //insertat(&START,1,9000);
    //orderedinsert(&START1,100);
    //Traverse(&START1);
    orderedinsert(&START2,50);
    orderedinsert(&START2,200);
    orderedinsert(&START2,250);
    orderedinsert(&START2,0);
    orderedinsert(&START2,55);
    Traverse(&START2);
    printf("\n");
    p=merge(&START1,&START2);
    Traverse(&p);
    printf("\n");
    p=intersect(&START1,&START2);
    Traverse(&p);
    printf("\n");
    //printf("%d",p);
    p=onlya(&START1,&START2);
    Traverse(&p);
    printf("\n");
    p=onlyb(&START1,&START2);
    Traverse(&p);
    printf("\n");
    p=symmetric(&START1,&START2);
    Traverse(&p);
    printf("\n");
    p=unione(&START1,&START2);
    Traverse(&p);
    printf("\n");
}