//Program for Prefix Evaluation
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include<string.h>
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
float pop(struct stack *ptr)
{
    float x;
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
    else
    {
        x=ptr->item[ptr->top];
        return x;
    }
}
int operation(int a,int b,char x)
{
    switch(x)
    {
    case '+': return a+b;
    case '-': return a-b;
    case '*': return a*b;
    case '/': return a/b;
    case '$': return pow(a,b);
    }
}
void main()
{
    struct stack s;
    initialise(&s);
    char str[STACKSIZE];
    int i=0;
    int b,a,value;
    scanf("%s",str);
    strrev(str);
    while(str[i]!='\0')
    {
        if(str[i]>='0'&&str[i]<='9')
        push(&s,(str[i]-'0'));
        else
        {
            a=pop(&s);
            b=pop(&s);
            value=operation(a,b,str[i]);
            push(&s,value);
        }
        i++;
    }
    printf("%.2f",pop(&s));
}