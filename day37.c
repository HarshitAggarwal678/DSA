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
    int x,a,s=1,f,v=1;
    float sum=0,i,p=0;
    scanf("%d",&x);
    //scanf("%d",&a);
    f=2;
    for(i=1;i<=x;i++)
    {
        
        sum=sum+(i/fact(v))*s;
        s=s*-1;
        v+=2;
    }
    printf("%f",sum);
}