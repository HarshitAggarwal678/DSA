#include<stdio.h>
void main()
{int a;
scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=a;j>i;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=((2*i)-1);k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for(int i=0;i<a-1;i++)
    {
        for(int k=0;k<=i;k++)
        {
            printf("  ");
        }
        for(int j=0;j<a-2*i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}