#include<stdio.h>
int Mean(int a[],int m)
{
static int sum=0;
static int i=0;
if(i==m)
return sum;
else
{
sum=sum+a[i];
i=i+1;
return Mean(a,5);
}
}
int Median(int a[],int m)
{
    if(m%2==0)
    return (((m/2)+((m/2)+1))/2);
    else
    return((m+1)/2);
    
}
void main()
{
    int a[5]={1,2,3,4,5};
    printf("%d\n",Mean(a,5)/5);
    printf("%d",Median(a,5));
}