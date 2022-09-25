#include<stdio.h>
void triangle(int a)
{int k=1;
    for(int i=1;i<=a;i++)
    {k=i;
        for(int j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }

}
void main()
{
    triangle(4);
}