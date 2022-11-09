#include<stdio.h>
#include<math.h>
void main()
{
    int x,a,s=-1;
    float sum=1,f=1,i,p;
    scanf("%d",&x);
    scanf("%d",&a);
    p=0.0;
    for(i=1;i<x;i++)
    {
        p=pow(a,i);
        f=f*i;
        sum=sum+(p/f)*s;
        s=s*-1;
    }
    printf("%f",sum);
}