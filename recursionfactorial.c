#include<stdio.h>
int factorial(int n)
{
if(n==0)
{
    return 1;
}
else
return n*factorial(n-1);
}
void main()
{int n;
scanf("%d",&n);
    //factorial(n);
    printf("%d",factorial(n));
}