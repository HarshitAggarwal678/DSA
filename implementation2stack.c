#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack
{
    int item[STACKSIZE];
    int top;
};
struct stack s;
void initialise()
{
    s.top=-1;yt
}