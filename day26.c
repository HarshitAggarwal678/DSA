#include<stdio.h>
void triangle(int a)
{int k=0;
    for(int i=1;i<=a;i++)
    {int l=i,c=0;
        for(int j=a;j>i;j--)
        {
            printf(" ");
        }
        for( k=0;k<i;k++)
        {c=l+k;
            printf("%d",c);
        }
        for(int m=1;m<k;m++)
        {
            printf("%d",c-m);
        }
        printf("\n");
    }

}
void main()
{
    triangle(4);
}