#include<stdio.h>
void main()
{
    int n,sum=10,a,b;
    scanf("%d",&n);
    while(sum > 9)
    {
        sum=0;
        while(n!=0)
        {
            a=n%10;
            sum=sum+a;
            n=n/10;
        }
        b=sum;
        n=sum;
    }
    printf("%d",b);
}