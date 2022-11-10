#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack
{
    char item[STACKSIZE];
    char top;
};
struct stack s;
void initialise()
{
    s.top=-1;
}
void push(char x)
{
    if(s.top==(STACKSIZE-1))
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
{
    char y[10];
    char rev[10];
    int i=0,j=0;
    initialise();
    printf("enter the string\n");
    scanf("%s",y);
    //printf("reversed string -->%s",y);
    while(y[i]!='\0')
    {
        push(y[i]);
        i++;
    }
    while(!isempty())
    {char z;
        z=pop();
        //printf("\n%c",z);
        rev[j]=z;
        j++;
    }
    rev[j]='\0';
    printf("reversed string -->%s",rev);

    
}

