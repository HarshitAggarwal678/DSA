//Program to check if the given number is a palindrome using stacks
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
    struct stack s;
    int n=0,f=0,a=0;
    initialise(&s);
    printf("enter the number\n");
    scanf("%d",&n);
    a=n;
   // printf(" %d %d",n,a);
    while(n!=0)
    {
        //c=n%10;
        //printf("%d",n);
        push(&s,(n%10));
        n=n/10;
    }
    while(a!=0)
    {
        if((a%10)!=pop(&s))
        {
            f++;
            break;
        }
        a=a/10;
    }
    if (f>0)
    {
        printf("Not a palindrome");
    }
    
    else
    printf("palindrome");

}
