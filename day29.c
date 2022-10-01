#include<stdio.h>
#include<math.h>
void main()
{float a;
int i;
int c;
scanf("%f",&a);
float b=ceil(a/2);
//printf("%f",b);
c=a-b;
    for( i=1;i<=b;i++)
    {
        for(int j=b;j>i;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=((2*i)-1);k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    int l=(2*i)-1;
    for(int z=1;z<=c;z++)
    {
        for(int k=0;k<z;k++)
        {
            printf("  ");
        }
        for(int j=0;j<l-4;j++)
        {
            printf("* ");
        }
        printf("\n");
        l=l-2;
    }
}