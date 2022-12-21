#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;
    n=50;
    int DAT[n];
    for(int i=0;i<n;i++)
    {
        DAT[i]=1;
    }
    for(int i=2;i*i<n;i++)
    {
        if(DAT[i]==1)
        {
            for(int j=i*i;j<n;j=j+i)
            {
                DAT[j]=0;
            }
        }
    }
    for(int i=2;i<n;i++)
    {
        if(DAT[i]==1)
        {
            printf("%d\t",i);
        }
    }

}