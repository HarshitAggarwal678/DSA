#include"link.h"
struct node * swap(struct node **start)
{
    struct node *i,*j,*t;
    t=GetNode();
    i=*start;
    j=i->Next;
    while(i!=NULL && j!=NULL )
    {
        t->info=i->info;
        i->info=j->info;
        j->info=t->info;
        if(j->Next!=NULL)
        {
            j=j->Next;
            if(j->Next!=NULL)
            {
                j=j->Next;
            }
            else
            break;
        }
        else
        break;
        i=i->Next;
        i=i->Next;
    }
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
    a=swap(&p);
    printf("\n");
    Traverse(&p);
}
