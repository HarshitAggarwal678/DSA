#include<stdio.h>
int powe(int a,int n)
{if(n==0)
return 1;
else
return a*powe(a,n-1);

}
void main()
{
    int a=2;
    int n=2;
    printf("%d",powe(a,n));
}