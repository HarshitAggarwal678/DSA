#include<stdio.h>
void main()
{
    int x;
    float sum=0,f=1,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        f=f*i;
        sum=sum+(f/i);
    }
    printf("%f",sum);
}