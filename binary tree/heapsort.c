#include<stdio.h>
void maxheapify(int a[],int n,int i)
{
    while((2*i+1)<=n)
    {
        int l,r,m;
        l=2*i+1;
        r=2*i+2;
        m=l;
        if(r<=n)
        {
            if(a[r]>a[l])
            m=r;
        }
        if(a[m]>a[i])
        {
            int t;
            t=a[m];
            a[m]=a[i];
            a[i]=t;
        }
        else
        break;
        i=m;
    }
}
void buildmaxheap(int a[],int n)
{
    for(int i=n/2;i>=0;i--)
    {
        maxheapify(a,n,i);
    }
}
void heapsort(int a[],int n)
{
    buildmaxheap(a,n);
    for(int j=n-1;j>0;j--)
    {
        int t;//swap(a[0],a[n-1])
        t=a[0];
        a[0]=a[j];
        a[j]=t;
        maxheapify(a,j-1,0);
    }
}
void main()
{
    int a[]={3,2,6,5,4,1,10};
    heapsort(a,7);
    // buildmaxheap(a,6);
    for(int i=0;i<7;i++)
    {
        printf("%d ",a[i]);
    }
}