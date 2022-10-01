#include<stdio.h>
void main()
{
    int a,b,c;
    int n;
    scanf("%d",&n);
    a=n/2;
    b=n-a;
    c=n;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=c;k++)
        {
            printf("* ");
        }
        printf("\n");
        c=c-2;
    }
    for(int i=1;i<=b;i++)
    {
        for(int j=i;j<b;j++)
        {
            printf("  ");
        }
        for(int k=1;k<2*i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}