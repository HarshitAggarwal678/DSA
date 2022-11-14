//Program to check the validity of Parenthesized Arithmetic Expression using Stack
#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 20
char DAt[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
struct stack
{
    char item[STACKSIZE];
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
void push(struct stack *ptr,char x)
{
    if (ptr->top==(STACKSIZE-1))
    {
        printf("Stack Overflow");
        exit(1);
    }
    ptr->top++;
    ptr->item[ptr->top]=x;
}
char pop(struct stack *ptr)
{
    char x;
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
    char x;
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
void parenthesis(struct stack *ptr,char *a)
{
    //char b[20]=a;
    int i=0;
    int f=0;
    //printf("%s",b);
    while(a[i]!='\0')
    {
        if(a[i]=='(')
            push(ptr,a[i]);
        else if(a[i]==')')
        {
            if(Isempty(ptr))
            {
                f=1;
                break;
            }
            else
            pop(ptr);
        }
    i++;
    }
    if(f==1)
    printf("Incorrect");
    else
    {
        if(Isempty(ptr))
            printf("correct");
        else
            printf("Incorrect");
    }

}
void main()
{
    struct stack s;
    char a[20];
    scanf("%s",a);
    initialise(&s);
    parenthesis(&s,a);
    
}