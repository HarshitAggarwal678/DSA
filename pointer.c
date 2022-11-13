#include<stdio.h>
void main()
{
    /*int x;
    int *p;
    x=10;
    printf("\n%u\n",&x);
    p=&x;
    printf("%d\n",x);
    printf("%u\n",(p+1));
    printf("%d\n",*p);*/
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=a;
    /*****************
    printf("%u\n",a);
    printf("%u\n",&a[0]);
    printf("%u\n",(ptr+1));
    printf("%u\n",&a[1]);
    *******************/
    
    for(int i=0;i<=9;i++)
    printf("%d",*(a+i));
    for(int i=0;i<=9;i++)
    printf("%d",*(ptr+i));
    for(int i=0;i<=9;i++)
    printf("%d",a[i]);
    
}