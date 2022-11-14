//Program for Decimal to Binary Conversion
#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 20
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
void Decimal(struct stack *ptr,int x,int b)
{
    while(x!=0)
    {
        int a;
        a=x%b;
        push(ptr,a);
        x=x/b;
    }
    while(!(Isempty(ptr)))
    {   
        printf("%d\n",pop(ptr));
    }
}
void main()
{
    struct stack s;
    int n,b;
    initialise(&s);
    scanf("%d",&n);
    scanf("%d",&b);
    printf("binary equivalent of %d is:\n",n);
    Decimal(&s,n,b);
    
}