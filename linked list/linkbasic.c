#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *Next;
}; /*************************************/
/***********************    u**************/

 struct node *GetNode()
 {
 struct node *p;
 p=(struct node *)malloc(sizeof(struct node));
 return p;
 }
 /*************************************/
 void InsBeg(struct node **START,int x)
 {
 struct node *p;
 p=GetNode();
 p->info=x;
 p->Next=(*START);
 (*START)=p;
 }
 /*************************************/
 void InsAft(struct node **p,int x)
 {
 struct node *q;
 q=GetNode();
 q->info=x;
 q->Next=(*p)->Next;
 (*p)->Next=q;
 }

 /*************************************/
 void InsEnd(struct node **START,int x)
 {
 struct node *p,*q;
 p=GetNode();
 p->info=x;
 p->Next=NULL;

 q=(*START);
 while(q->Next!=NULL)
 {
 q=q->Next;
 }
 q->Next=p;
 }
 /*************************************/
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
 /*************************************/
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
 /*************************************/
 DelEnd(struct node **START)
 {
 struct node *p,*q;
 int x;
 p=(*START);
 q=NULL;
 while(p->Next!=NULL)
 {
 q=p;
 p=p->Next;
 }
 q->Next=NULL;
 x=p->info;
 free(p);
 return x;
 }
 /*******************************/
 void Traverse(struct node *START)
 {
 struct node *p;
 p=START;
 while(p!=NULL)
 {
 printf("%d-->",p->info);
 p=p->Next;
 }
 }
 /*************************************/
 void EnQueue(struct node **START,int key)
 {
 struct node *p,*q;
 if((*START)==NULL)
 {
 InsBeg(&(*START),key);
 }
 else
 {
 p=(*START);
 q=NULL;
 while(p!=NULL && key>=p->info)
 {
 q=p;
 p=p->Next;
 }
 if(q==NULL)
 InsBeg(&(*START),key);
 else
 InsAft(&q,key);
 }
 }
 /*************************************/
 DeQueue(struct node **START)
 {
 int x;
 x=DelBeg(&(*START));
 return x;
 }
 int main()
 {
 struct node *START,*p;
 START=NULL;
 EnQueue(&START,10);
 EnQueue(&START,7);
 EnQueue(&START,12);
 EnQueue(&START,3);
 EnQueue(&START,4);
 EnQueue(&START,13);
 EnQueue(&START,1);
 EnQueue(&START,9);
 EnQueue(&START,8);
 Traverse(START);

 printf("\nDeleted information is:=> %d",DeQueue(&START));
 printf("\nDeleted information is:=> %d",DeQueue(&START));
 printf("\nDeleted information is:=> %d",DeQueue(&START));
 printf("\nDeleted information is:=> %d\n",DeQueue(&START));
 Traverse(START);


 return 0;
 }
