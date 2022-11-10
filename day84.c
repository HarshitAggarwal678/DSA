#include<stdio.h>
int dat[20];
void main()
{
    long long n,a=0,b=0,i=1,d,j=0,k=0,ls=0,rs=0;
    int c;
    scanf("%lld",&n);
    while(n!=0)
    {
        a=n%10;
        dat[i]=a;
        b=b+1;
        n=n/10;
        i++;
    }
    //printf("%d",b);
    c=(b/2)+1;
    //c=c+1;
    j=1;
    k=b;
    if(b%2 != 0)
    {
    while(j<c && k>c)
    {
        ls=ls+dat[j];
        rs=rs+dat[k];
        j++;
        k--;

    }
    if(ls==rs)
    printf("balanced");
    else
    printf("no");
    }
    else
    printf("wrong input");
}