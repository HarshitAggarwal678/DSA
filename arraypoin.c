#include<stdio.h>
void traverse(int *ptr,int n)
{
    int i;
    for(i=0;i<=n-1;i++)
    printf("%d",*(ptr+i));
}
void main()
{
    int i;
    int a[9]={1,2,3,4,5,6,7,8,9};
    traverse(a,9);
}