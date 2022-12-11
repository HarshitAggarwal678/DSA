#include"stackprimitive.h"
#include"link.h"
int palindrome(struct node **start)
{
    struct node *p;
    struct stack s;
    initialise(&s);
    p=*start;
    while(p!=NULL)
    {
        push(&s,p->info);
        p=p->Next;
    }
    p=*start;
    while(p!=NULL)
    {
        if(p->info==Stacktop(&s))
        {
            p=p->Next;
            pop(&s);
        }
        else
        {
            printf("NOT A PALINDROME");
            return 0;
        }
    }
    printf("PALINDROME");
    return 0;
}
void main()
{
    struct node *p;
    p=NULL;
    InsBeg(&p,1);
    InsEnd(&p,2);
    InsEnd(&p,3);
    InsEnd(&p,3);
    InsEnd(&p,2);
    InsEnd(&p,1);
    Traverse(&p);
    printf("\n");
    palindrome(&p);
}