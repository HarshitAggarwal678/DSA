#include<stdio.h>
#include<math.h>
int fact(int n)
{int f=1;
    for(int j=1;j<=n;j++)
    {
        f=f*j;
    }
    return f;
}
void main()
{
    int x,a,s=-1,f;
    float sum=1,i,p=0;
    scanf("%d",&x);
    scanf("%d",&a);
    f=2;
    for(i=1;i<x;i++)
    {
        p=pow(a,f);
        sum=sum+((p/fact(f))*s);
        s=s*-1;
        f+=2;
    }
    printf("%f",sum);
}