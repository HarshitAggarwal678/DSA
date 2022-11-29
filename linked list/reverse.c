#include"link.h"
#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
struct stack
{
    int item[STACKSIZE];
    int top;
};
void initialise(struct stack *ptr)
{
    ptr->top=-1;
}
int Isempty(struct stack *ptr)
{
    if (ptr->top==-1)
        return 1;
    else
        return 0;
}
void push(struct stack *ptr,int x)
{
    if (ptr->top==(STACKSIZE-1))
    {
        printf("Stack Overflow");
        exit(1);
    }
    ptr->top++;
    ptr->item[ptr->top]=x;
}
int pop(struct stack *ptr)
{
    int x;
    if(Isempty(ptr))
    {
        printf("Stack Underflow");
        exit(1);
    }
    x=ptr->item[ptr->top];
    ptr->top--;
    return x;
}
int Stacktop(struct stack *ptr)
{
    int x;
    if(Isempty(ptr))
    {
        printf("Stack is UnderFlow");
        exit(1);
    }
    else
    {
        x=ptr->item[ptr->top];
        return x;
    }
}
struct node *reverse(struct node **start,struct stack *s)
{
    struct node*p;
    p=*start;
   while(p!=NULL)
    {
        push(s,p->info);
        p=p->Next;
    }
    p=*start;
    while(p!=NULL)
    {
        p->info=pop(s);
        p=p->Next;
    }
    return *start;
}

void main()
{
    struct node *p,*a;
    p=NULL;
    struct stack s;
    initialise(&s);
    InsBeg(&p,1);
    InsBeg(&p,2);
    InsBeg(&p,3);
    InsBeg(&p,4);
    InsBeg(&p,5);
    Traverse(&p);
    printf("\n");
    a=reverse(&p,&s);
    Traverse(&a);

}