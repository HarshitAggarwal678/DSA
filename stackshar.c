#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack
{
    int item[STACKSIZE];
    int top,top1;
};
struct stack s;
void initialise()
{
    s.top=-1;
}
void initialise1()
{
    s.top1=STACKSIZE;
}
void push(int x)
{
    if(s.top==(10-1))
    {
        printf("stack overflow");
        exit(1);
    }
    else{
        s.top=s.top+1;
        s.item[s.top]=x;
    }
}
void push1(int x)
{
    if(s.top1==(-1))
    {
        printf("stack overflow");
        exit(1);
    }
    else{
        s.top1=s.top1-1;
        s.item[s.top1]=x;
    }
}
int isempty()
{
    if(s.top==-1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int isempty1()
{
    if(s.top1==STACKSIZE)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int pop()
{if (isempty())
{
    printf("stack underflow");
    exit(1);
}
else{
    int x=s.item[s.top];
    s.top=s.top-1;
    return x;
}
}
int pop1()
{
    if (isempty1())
{
    printf("stack underflow");
    exit(1);
}
else{
    int x=s.item[s.top1];
    s.top1=s.top1+1;
    return x;
}

}
int stacktop()
{
    int x=s.item[s.top];
    return x;
}
int stacktop1()
{
    int x=s.item[s.top];
    return x;
}
void main()
{
    int x;
    initialise();
    initialise1();
    push1(100);
    push1(300);
    push(200);
    push(400);
printf("%d\n",pop1());
printf("%d\n",pop1());
printf("%d\n",pop());
printf("%d\n",pop());
//pop();
//pop1();
//pop();
//pop();
}


