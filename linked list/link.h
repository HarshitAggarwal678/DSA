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
