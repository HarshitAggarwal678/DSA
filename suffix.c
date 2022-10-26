#include<stdio.h>
#include<string.h>
void main()
{char a[10];
int i=0;
    gets(a);
    while(a[i]!='\0')
    {
        i++;
    }
    for(int j=0;j<i;j++)
    {
        for(int k=i-1-j;k<i;k++)
        printf("%c",a[k]);
        printf("\n");
    }
}