#include<stdio.h>
void triangle(int a)
{
    char b='A';
    for(int i=0;i<a;i++)
    {b= 'A'+i;
        for(int j=0;j<=i;j++)

        {
            printf("%c",b);
            b++;
        }
        printf("\n");
    }

}
void main()
{
    triangle(4);
}