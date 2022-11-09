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
    int x,a,s=1;
    float sum=0,f=1,i,p=0;
    scanf("%d",&x);
    scanf("%d",&a);
    for(i=1;i<=(x*2)-1;i=i+2)
    {
        p=pow(a,i);
        sum=sum+((p/fact(i))*s);
        s=s*-1;
    }
    printf("%f",sum);
}