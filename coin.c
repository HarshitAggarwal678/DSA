#include<stdio.h>
#include<stdlib.h>

void main()
{
    int m,p=0,s,r,f=0;
    scanf("%d",&m);
    while(m>0)
    {
        p++;
        m=m-p;
        if(m<0)
        {
            f++;
            break;
        }

    }
    if(f>0)
    printf("wrong input");
    else
    {
        s=(p-1)*2;
        printf("%f",((sqrt(3)/4)*s*s));
    }


}