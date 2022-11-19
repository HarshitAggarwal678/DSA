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
    struct stack s,s1;
    int n,x,min,max;
    initialise(&s);
    initialise(&s1);
    printf("enter the no. of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        push(&s,x);
    }
    //printf("hii");
    max=Stacktop(&s);
    min=Stacktop(&s);
    while(!(Isempty(&s)))
    {
        if(max<Stacktop(&s))
            max=Stacktop(&s);
        if(min>Stacktop(&s))
            min=Stacktop(&s);
        push(&s1,pop(&s));
    }
    while(!(Isempty(&s1)))
    {
        push(&s,pop(&s1));
    }
    printf("\n%d %d\n",max,min);
    while(!Isempty(&s))
    {
        printf("%d\t",pop(&s));
    }
    
}