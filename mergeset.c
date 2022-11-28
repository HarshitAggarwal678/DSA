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
  InsBeg(START,x);
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
struct node **merge(struct node **start1,struct node **start2)
{
    struct node *p,*q,*START3;
    p=*start1;
    q=*start1;
    while(p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
            InsEnd(&START3,p->info);
            p=p->Next;
        }
        else 
        {
            InsEnd(&START3,q->info);
            q=q->Next;
        }
    }
    while(p!=NULL)
    {
        InsEnd(&START3,p->info);
            p=p->Next;
    }
    while(q!=NULL)
    {
        InsEnd(&START3,q->info);
            q=q->Next;
    }
    Traverse(&START3);
    return &START3;
}
void main()
{
    struct node *START1,*START2;
    START1=NULL;
    START2=NULL;
    orderedinsert(&START1,5);
    orderedinsert(&START1,3);
    orderedinsert(&START1,4);
    orderedinsert(&START1,78);
    orderedinsert(&START1,89);
    orderedinsert(&START1,57);
    orderedinsert(&START1,43);
    orderedinsert(&START2,23);
    orderedinsert(&START2,56);
    orderedinsert(&START2,34);
    orderedinsert(&START2,56);
    orderedinsert(&START2,5);
    //merge(&START1,&START2);
    Traverse(merge(&START1,&START2));



}