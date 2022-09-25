#include<stdio.h>
void triangle(int a)
{char b='E';
    for(int i=0;i<a;i++)
    {
        for(int j=i;j>=0;j--)
        {
            printf("%c",b-j);
        }
        printf("\n");
    }
}
void main()
{
    triangle(5);
}