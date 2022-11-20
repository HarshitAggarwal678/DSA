//Program for Stack Primitive Operations
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
void main()
{
    struct stack s,st;
    initialise(&s);
    initialise(&st);
    int n,x,y,z;
    printf("enter the no.s");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   
        scanf("%d",&x);
       // printf("\t\t%d",x);
        push(&s,x);
    }
    while(!Isempty(&s))
    {
         y=pop(&s);
         //printf("%d",y);
        while(!(Isempty(&st)) && (y<Stacktop(&st)))
        {
            z=pop(&st);
            push(&s,z);
        }
        push(&st,y);
    }
    while(!Isempty(&st))
    {
        printf("%d\t",pop(&st));
    }
}
