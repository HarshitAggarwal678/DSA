#include"primitive.h"
struct node*concat(struct node**cstart1,struct node**cstart2)
{
    struct node*p,*q;
    p=(*cstart1)->Next;
    q=(*cstart2)->Next;
    (*cstart1)->Next=q;
    (*cstart2)->Next=p;
    return *cstart2;
}
void main()
{
    struct node *cstart1,*p,*cstart2;
    cstart1=NULL;
    cstart2=NULL;
    p=NULL;
    InsBeg(&cstart1,5);
    InsBeg(&cstart1,4);
    InsBeg(&cstart1,3);
    InsBeg(&cstart1,2);
    InsBeg(&cstart1,1);
    Traverse(&cstart1);
    InsBeg(&cstart2,3);
    InsBeg(&cstart2,4);
    InsBeg(&cstart2,7);
    InsBeg(&cstart2,4);
    InsBeg(&cstart2,3);
    printf("\n");
    Traverse(&cstart2);
    p=concat(&cstart1,&cstart2);
    printf("\n");
    Traverse(&p); 
}