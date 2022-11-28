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
void InsEnd(struct node **START,int x)
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
void linear(struct node **START,int x)
{
  struct node *p;
  p=*START;
  int c=1;
  while(p->info!=x)
    {
      c++;
      p=p->Next;
    }
    printf("\n%d",c);
}
void Traverse(struct node **START)
{
  struct node *p;
  p=*START;
  int c=0;
  while(p!=NULL)
    {
      printf("%d ",p->info);
      p=p->Next;
    }
}
void main()
{
    struct node *START;
    START=NULL;
    InsBeg(&START,100);
    InsBeg(&START,200);
    InsBeg(&START,300);
    InsBeg(&START,400);
    InsBeg(&START,500);
    InsEnd(&START,900);
    InsBeg(&START,600);
    InsEnd(&START,700);
    Traverse(&START);
    linear(&START,600);
}