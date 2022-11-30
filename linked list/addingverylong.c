#include<stdio.h>
#include"link.h"
#include<string.h>
#include<stdlib.h>
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
        sum=total%10000;
        carry=total/10000;
        p=p->Next;
        q=q->Next;
        InsBeg(&s3,sum);
    }
    while(p!=NULL)
    {
        total=p->info+carry;
        sum=total%10000;
        carry=total/10000;
        p=p->Next;
        InsBeg(&s3,sum);
    }
    while( q!=NULL)
    {
        total=q->info+carry;
        sum=total%10000;
        carry=total/10000;
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
    a=NULL;
    int x,y,g,h,gg,hh,k,l;
    int cc=0;
    char zz[100];
    char xx[100];
    p=NULL;
    q=NULL;
    gets(zz);
    gets(xx);
    x=strlen(zz);
    y=strlen(xx);
    g=x%4;
    h=y%4;
    gg=x/4;
    hh=y/4;
    k=g;
    l=h;
    for(int i=0;i<gg;i++)
    {char t[5];
        for(int j=0;j<4;j++)
        {
            t[j]=zz[k];
            k++;
        }
        InsBeg(&p,atoi(t));
    }
    char yy[g+1];
    for(int i=0;i<g;i++)
    {
        yy[i]=zz[i];
    }
    InsBeg(&p,atoi(yy));
    Traverse(&p);
    printf("\n");
    /*****************8******************8*/
    for(int i=0;i<hh;i++)
    {char t[5];
        for(int j=0;j<4;j++)
        {
            t[j]=xx[l];
            l++;
        }
        InsBeg(&q,atoi(t));
    }
    char vv[g+1];
    for(int i=0;i<h;i++)
    {
        vv[i]=xx[i];
    }
    InsBeg(&q,atoi(vv));
    Traverse(&q);
    printf("\n");
    a=addn(&p,&q);
    Traverse(&a);
}