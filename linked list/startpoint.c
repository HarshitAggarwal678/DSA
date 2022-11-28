#include <stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *Next;
}; 
/********************/
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
/*******************/
void InsBeg(struct node** START,int x)
{
  struct node *p;
  p=GetNode();
    p->info=x;
  p->Next=*START;
  *START=p;
}
/****************/
void InsEnd(struct node** START,int x)
{
  struct node *q,*p;
  q=*START;
  while(q->Next!=NULL)
    q=q->Next;
  p=GetNode();
  p->info=x;
  p->Next=NULL;
  q->Next=p;
}
/*****************/
void cycle(struct node **START)
{
  struct node *p,*q;
  p=*START;
  while(p->Next!=NULL)
    {
      p=p->Next;
    }
    q=*START;
    while(q->info!=400)
    {
        q=q->Next;
    }
    p->Next=q;
}
/***************/
void cycledetect(struct node **START)
{
  struct node *t,*r;
  t=*START;
  r =*START;
  int c=0;
  while(r!=NULL && r->Next!=NULL)
  {
        t=t->Next;
        r=r->Next;
        r=r->Next;
        if(t==r)
        {
            c++;
            break;
        }
  }
  if(c>0)
  printf("cycle");
  else
  printf("Not cycle");
}
/***********/
void cyclelength(struct node **START)
{
  struct node *t,*r;
  t=*START;
  r =*START;
  int c=0;
  while(r!=NULL && r->Next!=NULL)
  {
        t=t->Next;
        r=r->Next;
        r=r->Next;
        if(t==r)
         break;
  }
  do
  {
   c++;
   t=t->Next;
  }while(t!=r);
  printf("%d",c);
}
/*****************/
void startpoint(struct node **START)
{
  struct node *t,*r,*p;
  t=*START;
  r =*START;
  p =*START;
  int c=0;
  while(r!=NULL && r->Next!=NULL)
  {
        t=t->Next;
        r=r->Next;
        r=r->Next;
        if(t==r)
         break;
  }
  t=t->Next;
  printf("%d",t->info);
  while(p!=r)
  {
    p=p->Next;
    r=r->Next;
  }
  printf("\n%d",p->info);
}
/****************/
void Traverse(struct node** START)
{
  struct node *p;
  p=*START;
  while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->Next;
    }
}
/**********************/
int main()
{
    struct node *START,*START2,*START3,*a;
  START=NULL;
  InsBeg(&START,100);
  InsBeg(&START,200);
  InsBeg(&START,300);
  InsBeg(&START,400);
  InsBeg(&START,500);
  InsBeg(&START,900);
  InsBeg(&START,600);
  InsBeg(&START,700);
  Traverse(&START);
  printf("\n");
  cycle(&START);
  cyclelength(&START);
  printf("\n");
  startpoint(&START);

}