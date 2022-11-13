#include<stdio.h>
#include <stdlib.h>
void main()
{
    int *p;
    
    int n;
    //scanf("%d",&n);
   /* p=(int*) malloc(n*sizeof(int));
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%d\n",*(p+i));
    }*/
    //int *ptr;
    char *ptr;
    char *z;
    
    z=(char*) malloc(4);
    
    //*ptr='A';
    //printf("%c",*ptr);
    *z='a';

    //printf("%c",*z);
    
    //printf("\n%u\n",sizeof(long long));
    //printf("%u",sizeof(p));
    int *zi;
    zi=(int*) malloc(4);
    zi[0]=10;
    zi[1]=11;
    zi[2]=12;
    zi[3]=13;
    zi[4]=14;
    printf("%d\n",zi[0]);
    printf("%d\n",zi[1]);
    printf("%d\n",zi[2]);
    printf("%d\n",zi[3]);
    printf("%d\n",zi[4]);
}