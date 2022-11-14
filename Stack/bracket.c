//Program to check the validity of brackets Arithmetic Expression using Stack
#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 20
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
char Stacktop(struct stack *ptr)
{
    char x;
    if(Isempty(ptr))
    {
        printf("Stack is UnderFlow");
        exit(1);
    }
    x=ptr->item[ptr->top];
    return x;
}
int brackets(struct stack *ptr,char *a)
{
    int i=0;
    //int f=0;
    //printf("%s",a);
    while(a[i]!='\0')
    {
        if((a[i]=='(')||(a[i]=='{')||(a[i]=='['))
            push(ptr,a[i]);
        else 
        {
            if((Isempty(ptr)))
            {
                //f=1;
                return 0;
                //break;
            } 
            else if(a[i]==')')
            {
                if(Stacktop(ptr)=='(')
                pop(ptr);
                else
                return 0;
            }
            else if(a[i]=='}')
            {
                if(Stacktop(ptr)=='{')
                pop(ptr);
                else
                return 0;
                //pop(ptr);
            }
            else if(a[i]==']')
            {
                if(Stacktop(ptr)=='[')
                pop(ptr);
                else
                return 0;
            }
        }
        i++;
    }
    /*if(f==1)
    printf("Incorrect");
    else
    {*/
    if((Isempty(ptr)))
        return 1;
    else
        return 0;
}
void main()
{
    struct stack s;
    char a[20];
    scanf("%s",a);
    initialise(&s);
    printf("%d",brackets(&s,a)); 
}