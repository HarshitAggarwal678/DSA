#include<stdio.h>
int fact(int a)
{int sum=1;
    for(int i=1;i<=a;i++)
    {
        sum=sum*i;
    }
    return sum;

}
void main()
{
    printf("%d",fact(4));
}