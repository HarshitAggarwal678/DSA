# include<stdio.h>
void traverse(int a[],int m)
{for(int i=0;i<m;i++)
{
    printf("%d",a[i]);
    printf("\n");
}

}
void main()
{
    int a[5]={1,2,3,4,5};
    traverse(a,5);

}