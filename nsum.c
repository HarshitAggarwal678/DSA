#include<stdio.h>
int sum(int a)
{int sumy=0;
    for(int i=1;i<=a;i++)
    {
        sumy=sumy+i;
    }
    return sumy;
}
void main()
{
    int a;
    scanf("%d",a);
    printf("%d",sum(a));
}