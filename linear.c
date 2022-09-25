#include<stdio.h>
void linear(int a[],int c,int b)
{   int flag=0;
int i=0;
    for( i=0;i<10;i++ )
    {
        if(a[i]==b)
        {
            flag=flag+1;
            break;
        }
    }
    if(flag==0)
    {
        printf("element not found");
    }
    else
    printf("element is at index %d",i);

}
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int b=7;

    linear(a,10,b);
}