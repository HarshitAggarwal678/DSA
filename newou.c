#include<stdio.h>
#include <stdlib.h>
void inp(int *p,int n)
{
for(int i=0;i<n;i++)
scanf("%d",(p+i));
}
void ou(int *p,int n)
{
    for(int i=0;i<n;i++)
    printf("%d\n",*(p+i));
}
void main()
{
    int *p;
    int n=10;
    p=(int*)malloc(10*sizeof(int));
    inp(p,n);
    ou(p,n);

    
}