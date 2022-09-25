#include<stdio.h>
int fibonacci(int n)
{
    if (n==1)
    return 0;
    else
    {
        if (n==2)
        return 1;
        else
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
void main()
{
    for(int i=1;i<=100;i++)
    {
        int x=fibonacci(i);
        printf("%d  %d ",i,x);

    }
}