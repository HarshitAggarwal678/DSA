#include<stdio.h>
int powe(int a,int b)
{int sum=1;
    for(int i=1;i<=b;i++)
    {
        sum=sum*a;
    }
    return sum;
}
void main()
{int a=2,b=3;
    printf("%d",powe(a,b));
}