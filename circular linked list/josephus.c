#include"primitive.h"
struct node *josephus(struct node **s,int k)
{
    struct node *p,*q;
    int c=1;
    p=(*s)->Next;
    q=NULL;
    while ((p->Next)!=p)
    {
        while(c!=k)
        {
            q=p;
            c=c+1;
            p=p->Next;
        }
        p=p->Next;
        DelAft(&q);
        c=1;
    }
    return p;
}
void main()
{
    struct node *cstart1,*p;
    int k=13;
    cstart1=NULL;
    InsBeg(&cstart1,7);
    InsBeg(&cstart1,6);
    InsBeg(&cstart1,5);
    InsBeg(&cstart1,4);
    InsBeg(&cstart1,3);
    InsBeg(&cstart1,2);
    InsBeg(&cstart1,1);
    p=josephus(&cstart1,k);
    printf("%d",p->info);
}