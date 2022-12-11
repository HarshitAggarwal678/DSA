#include <stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *Next;
}; 
/*********/
 int DelAft(struct node **p)
 {
 int x;
 struct node *q;
 q=(*p)->Next;
 (*p)->Next=q->Next;
 x=q->info;
 free(q);
 return x;
 }
/********/
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
/*******/
void InsBeg(struct node **START,int x)
{
  struct node *p;
  p=GetNode();
  p->info=x;
  p->Next=*START;
  *START=p;
}
/******/
int DelBeg(struct node **START)
 {
 struct node *p;
 int x;
 p=(*START);
 (*START)=(*START)->Next;
 x=p->info;
 free(p);
 return x;
 }
 /******/
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
/*******/
void InsAft(struct node **p,int x)
 {
 struct node *q;
 q=GetNode();
 q->info=x;
 q->Next=(*p)->Next;
 (*p)->Next=q;
 }
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
struct node *reverse(struct node **start)
{
struct node *p,*n,*c;
c=*start;
p=NULL;
n=c->Next;
while (c!=NULL)
{
    c->Next=p;
    p=c;
    c=n;
    if (n!=NULL)
    {
        n=n->Next;
    }
}
*start=p;
return *start;
}
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
int count(struct node **start)
{
  struct node *p;
  p=*start;
  int c=0;
  while(p!=NULL)
    {
      c++;
      p=p->Next;
    }
  return c;
}