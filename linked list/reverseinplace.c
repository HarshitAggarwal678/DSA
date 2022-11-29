#include"link.h"
struct node *reverse(struct node **start)
{
struct node *p,*n,*c;
c=*start;
p=NULL;
n=c->Next;
while (c!=NULL)
{
    c->Next=p;
    p=c;
    c=n;
    if (n!=NULL)
    {
        n=n->Next;
    }
}
*start=p;
return *start;
}
void main()
{
    struct node *p,*a;
    p=NULL;
    InsBeg(&p,1);
    InsBeg(&p,2);
    InsBeg(&p,3);
    InsBeg(&p,4);
    InsBeg(&p,5);
    Traverse(&p);
    printf("\n");
    a=reverse(&p);
    Traverse(&a);

}