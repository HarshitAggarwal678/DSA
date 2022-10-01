#include<stdio.h>
#include<math.h>
void prime(int a)
{int flag=0;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("prime");
    }
    else
    printf("no");
}
void main()
{
    int a;
    scanf("%d",&a);
    prime(a);
}