#include"primitive.h"
struct node *reverse(struct node **cstart)
{
    struct node *c,*p,*n,*q;
    q=(*cstart)->Next;
    p=*cstart;
    c=(*cstart)->Next;
    n=c->Next;
    while(c!=(*cstart))
    {
        c->Next=p;
        p=c;
        c=n;
        if(n!=(*cstart))
        {
            n=n->Next;
        }
    }
    c->Next=p;
    return q;
}
void main()
{
    struct node *cstart1,*p;
    cstart1=NULL;
    InsBeg(&cstart1,5);
    InsBeg(&cstart1,4);
    InsBeg(&cstart1,3);
    InsBeg(&cstart1,2);
    InsBeg(&cstart1,1);
    Traverse(&cstart1);
    printf("\n");
    p=reverse(&cstart1);
    Traverse(&p);
}