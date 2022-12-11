#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct node *Next;
};
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
struct node* create(struct node**p)
{
    struct node *q;
    q=GetNode();
    *p=q;
    (*p)->info=0;
    (*p)->Next=NULL;
    return *p;
}
void InsBeg(struct node **head,int x)
{
  struct node *q;
 q=GetNode();
 q->info=x;
 q->Next=(*head)->Next;
 (*head)->Next=q;
 (*head)->info=(*head)->info+1;
 }
 void InsAft(struct node **p,struct node **head,int x)
 {
 struct node *q;
 q=GetNode();
 q->info=x;
 q->Next=(*p)->Next;
 (*p)->Next=q;
 (*head)->info=(*head)->info+1;
 }
 void Traverse(struct node **START)
{
  struct node *p;
  p=(*START)->Next;
  while(p!=NULL)
    {
      printf("%d\t",p->info);
      p=p->Next;
    }
}
int DelBeg(struct node **head)
 {
 int x;
 struct node *q;
 q=(*head)->Next;
 (*head)->Next=q->Next;
 x=q->info;
 free(q);
 (*head)->info=(*head)->info-1;
 return x;
 }
 int DelAft(struct node **p,struct node **head)
 {
 int x;
 struct node *q;
 q=(*p)->Next;
 (*p)->Next=q->Next;
 x=q->info;
 free(q);
 (*head)->info=(*head)->info-1;
 return x;
 }
 void main()
 {
    struct node *p;
    p=NULL;
    create(&p);
    InsBeg(&p,5);
    InsBeg(&p,10);
    DelBeg(&p);
    Traverse(&p);
    printf("%d",p->info);
 }