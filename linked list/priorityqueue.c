#include"link.h"
void orderedinsert(struct node **START,int x)
{
    struct node*p,*q;
    p=*START;
    q=NULL;
    while(p!=NULL&&x<=p->info)
    {
        q=p;
        p=p->Next;
    }
    if(q==NULL)
    InsBeg(START,x);
    else
    InsAft(&q,x);

}
void main()
{
    struct node *p;
    p=NULL;
    orderedinsert(&p,100);
    orderedinsert(&p,500);
    orderedinsert(&p,500);
    orderedinsert(&p,800);
    Traverse(&p);
    printf("\n");
    printf("%d",DelBeg(&p));
    printf("\n");
    Traverse(&p);
    
}