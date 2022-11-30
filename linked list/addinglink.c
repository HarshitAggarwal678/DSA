#include<stdio.h>
#include"link.h"
struct node *addn(struct node **s,struct node **s2)
{
    int total,carry,sum;
    struct node *p,*q,*s3,*a,*b;
    a=reverse(s);
    b=reverse(s2);
    s3=NULL;
    p=a;
    q=b;
    total=0;
    carry=0;
    sum=0;
    while(p!=NULL && q!=NULL)
    {
        total=p->info+q->info+carry;
        sum=total%10;
        carry=total/10;
        p=p->Next;
        q=q->Next;
        InsBeg(&s3,sum);
    }
    while(p!=NULL)
    {
        total=p->info+carry;
        sum=total%10;
        carry=total/10;
        p=p->Next;
        InsBeg(&s3,sum);
    }
    while( q!=NULL)
    {
        total=q->info+carry;
        sum=total%10;
        carry=total/10;
        q=q->Next;
        InsBeg(&s3,sum);
    }
    if(carry > 0)
    {
        InsBeg(&s3,carry);
    }
    return s3;
}
void main()
{
    struct node *p,*a,*q;
    p=NULL;
    q=NULL;
    InsBeg(&p,1);
    InsBeg(&p,2);
    InsBeg(&p,3);
    InsBeg(&p,4);
    InsBeg(&p,5);
    Traverse(&p);
    printf("\n");
    InsBeg(&q,1);
    InsBeg(&q,2);
    InsBeg(&q,3);
    InsBeg(&q,4);
    InsBeg(&q,5);   
    Traverse(&q); 
    printf("\n");
    a=addn(&p,&q);
    Traverse(&a);

}