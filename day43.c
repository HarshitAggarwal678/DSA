#include<stdio.h>
int fact(int n)
{static int sum=1;
if(n==0)
return sum;
else
{
sum=sum*n;
fact(n-1);
}

}
void main()
{
    int n=4;
    printf("%d",fact(n));
}