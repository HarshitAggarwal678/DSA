#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack{
    char item[STACKSIZE];
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
char pop()
{if (isempty())
{
    printf("stack underflow");
    exit(1);
}
else{
    char x=s.item[s.top];
    s.top=s.top-1;
    return x;
}

}
char stacktop()
{
    char x=s.item[s.top];
    return x;
}
void main()
{int symb;
    char x[100]='854*22^/-7+';
    initialise();
    //x='854*22^/-7+';
    int i=0;
    while(x[i]!='\0')
    {
        symb=x[i];
        if(x[i]>='0'&&x[i]<='9')
        {
            
        }
    }
    //push("854*22^/-7+");


}

