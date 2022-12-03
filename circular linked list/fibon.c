#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *Next;
};
/******************************/
struct node* GetNode()
{
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  return p;
}
/******************************/
void InsBeg(struct node**CSTART,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    if(*CSTART!=NULL)
    {
      p->Next=(*CSTART)->Next;
      (*CSTART)->Next=p;
    }
    else
    {
      *CSTART=p;
      (*CSTART)->Next=p;
    }
}
/******************************/
void InsEnd(struct node**CSTART,int x)
{
  struct node *p;
  p=GetNode();
  p->info=x;
  if (*CSTART!=NULL)
  {
    p->Next=(*CSTART)->Next;
    (*CSTART)->Next=p;
    *CSTART=p;
  }
  else
  {
    *CSTART=p;
    (*CSTART)->Next=p;
  }
}
/******************************/
void InsAft(struct node**CSTART,int x)
{
  struct node *p;
  if(*CSTART==NULL)
  {
    printf("void insertion");
    exit(1);
  }
  else
  {
    p=GetNode();
    p->info=x;
    p->Next=(*CSTART)->Next;
    (*CSTART)->Next=p;
  }
}
/******************************/
int DelBeg(struct node**CSTART)
{
  int x;
  struct node *p;
  p=(*CSTART)->Next;
  (*CSTART)->Next=p->Next;
  if((*CSTART)->Next==*CSTART)
  {
    *CSTART=NULL;
  }
  x=p->info;
  free(p);
  return x;
}
/******************************/
int DelEnd(struct node**CSTART)
{
  int x;
  struct node *p,*q;
  p=*CSTART;
  while (p->Next!=*CSTART)
  {
    p=p->Next; 
  }
  p->Next=(*CSTART)->Next;
  q=*CSTART;
  *CSTART=p;
  x=q->info;
  free(q);
  return x;
}
/******************************/
int DelAft(struct node**CSTART)
{
  int x;
  struct node *p;
  p=(*CSTART)->Next;
  (*CSTART)->Next=p->Next;
  x=p->info;
  free(p);
  return x;
}
/******************************/
void Traverse(struct node **CSTART)
{
  struct node *p;
  p=(*CSTART)->Next;
  while (p!=*CSTART)
  {
    printf("%d ",p->info);
    p=p->Next;
  }
  printf("%d",p->info);
}
/******************************/
int maxe(struct node **cstart)
{
    //printf("%d\n",(*cstart)->info);
    struct node *p;
    p=(*cstart)->Next;
    int m=0;
    while(p!=(*cstart))
    {
        if(m<(p->info))
        {
            m=p->info;
        }
        p=p->Next;
    }
    if(m<(p->info))
    {
        m=(*cstart)->info;
    }
    return m;
}
void fibo(int x,struct node **cstart)
{
  int *f;
  struct node *p,*q;
  f=(int*)malloc(x*sizeof(int));
  *(f+0)=0;
  *(f+1)=1;
  int i=1;
  while(*(f+i)<x)
  {
    i++;
    *(f+i)=*(f+i-1)+*(f+i-2);
  }
  int DAT[x+1];
  printf("\n");
  for(int j=0;j<i;j++)
  {
    DAT[j]=0;
  }
  for(int j=0;j<i;j++)
  {
    if(DAT[*(f+j)]==0)
    {
      DAT[*(f+j)]=1;
    }
  }
p=(*cstart)->Next;
q=*cstart;
while(p!=(*cstart))
{
  if(DAT[(p->info)]!=0)
  {
    p=p->Next;
    DelAft(&q);
  }
  else
  {
    q=p;
    p=p->Next;
  }
}
if(DAT[(p->info)]!=0)
  {
    DelAft(&q);
    *cstart=q;
  }
*cstart=p;
Traverse(cstart);
}

void main()
{
  int a=5;
  struct node *cstart;
  cstart=NULL;
  InsBeg(&cstart,5);
  InsBeg(&cstart,4);
  InsBeg(&cstart,3);
  InsBeg(&cstart,2);
  InsBeg(&cstart,1);
  fibo(maxe(&cstart),&cstart); 
}