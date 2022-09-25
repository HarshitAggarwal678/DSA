#include<stdio.h>
void insert(int a[],int m)
{
    int pos=4;
    for(int i=m-2;i>=pos-1;i--)
    {
        a[i+1]=a[i];

    }
    a[pos-1]=4;
    for(int i=0;i<m;i++)
    {
        printf("%d",a[i]);

    }



}
void main()
{
    int a[8]={1,2,3,5,6,7,8};
    insert(a,8);
}