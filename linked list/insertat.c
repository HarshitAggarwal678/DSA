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
    printf("\n");
    insertat(&START,1,9000);
    Traverse(&START);
}