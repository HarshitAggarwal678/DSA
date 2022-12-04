#include <stdio.h>
#include<stdlib.h>
struct node
{
    char info;
    struct node *Next;
}; 
/*********/
 char DelAft(struct node **p)
 {
 char x;
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
void InsBeg(struct node **START,char x)
{
  struct node *p;
  p=GetNode();
  p->info=x;
  p->Next=*START;
  *START=p;
}
/******/
char DelBeg(struct node **START)
 {
 struct node *p;
 char x;
 p=(*START);
 (*START)=(*START)->Next;
 x=p->info;
 free(p);
 return x;
 }
 /******/
void InsEnd(struct node **START,char x)
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
void InsAft(struct node **p,char x)
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
      printf("%c\t",p->info);
      p=p->Next;
    }
}
struct node *order(struct node **start)
{
  struct node *p,*c,*n;
  p=NULL;
  c=NULL;
  n=*start;
  while(n->info=='a'||n->info=='e'||n->info=='i'||n->info=='o'||n->info=='u')
  {
      p=n;
      c=n;
      if(n!=NULL)
        n=n->Next;
  }
  while(n!=NULL)
  {
    if(n->info=='a'||n->info=='e'||n->info=='i'||n->info=='o'||n->info=='u')
    {
      if(p==NULL)
      {
        InsBeg(start,n->info);
        p=*start;
        c=n;
        if(n!=NULL)
          n=n->Next;
      }
      else
      {
        InsAft(&p,n->info);
        p=p->Next;
        if(n->Next!=NULL)
        {
          n=n->Next;
          DelAft(&c);
        }
        else
        {
          DelAft(&c);
          n=NULL;
        }
      }
    }
    else
    {
      c=n;
      n=n->Next;
    }
  }
  return *start;
}
void main()
{
  struct node *p,*q;
  p=NULL;
  InsBeg(&p,'i');
  InsBeg(&p,'x');
  InsBeg(&p,'o');
  InsBeg(&p,'d');
  InsBeg(&p,'e');
  InsBeg(&p,'c');
  InsBeg(&p,'b');
  InsBeg(&p,'a');
  q=order(&p);
  Traverse(&q);
    
}