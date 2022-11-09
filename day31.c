#include<stdio.h>
void main()
{
    int x,sum=0,f=1;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        f=f*i;
        sum=sum+f;
    }
    printf("%d",sum);
}