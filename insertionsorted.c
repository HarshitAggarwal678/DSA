#include<stdio.h>
void insert(int a[],int m)
{
    int b=4,index=0;
    for(int i=0;i<=m-2;i++)
    {   if(b<a[i])
            {
            break;
            }
        index=index+1;
    }
if(index==m-1)
{a[m-1]=b;
}
else
{
    for(int i=m-2;i>=index;i--)
       {
           a[i+1]=a[i];
       }
       a[index]=b;
}
for(int i=0;i<m;i++)
{
    printf("%d\n",a[i]);
}
}
void main()
{
    int a[8]={1,2,3,5,6,7,8};
    insert(a,8);
}