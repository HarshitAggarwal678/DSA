#include<stdio.h>
int main()
{int k,l,j=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=5-i;j>=0;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",i+k-1);
        }
        
        for(int l=1;l<i;l++)
        {
            printf("%d",k-i-l);
        }
        printf("\n");

    }
}