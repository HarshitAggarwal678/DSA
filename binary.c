#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack{
    int item[STACKSIZE];
    int top;
};
struct stack s;
void initialise()
{
    s.top=-1;
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
int stacktop()
{
    int x=s.item[s.top];
    return x;
}
void main()
{
    initialise()
    
}