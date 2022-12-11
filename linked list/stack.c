#include"link.h"
void push(struct node **start,int x)
{
    InsBeg(start,x);
}
int pop(struct node **start)
{
    int x;
    x=DelBeg(start);
    return x;
}
void main()
{
    struct node *p;
    p=NULL;
    int x;
    push(&p,100);
    push(&p,200);
    push(&p,300);
    push(&p,400);
    push(&p,500);
    Traverse(&p);
    x=pop(&p);
    printf("\n%d",x);
    x=pop(&p);
    printf("\n%d",x);
    x=pop(&p);
    printf("\n%d\n",x);
    Traverse(&p);

}