#include<stdio.h>
void main()
{int i,j,k,l,a=0,n;
scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("%d ",j);
        }
        a=((n-j+1)*2)-1;
        for(int k=1;k<=a;k++)
        {
            printf("  ");
        }
        for(int l=n-1-(a/2);l>=1;l--)
        {
            printf("%d ",l);
        }
        printf("\n");

    }
    
    
}