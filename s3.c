#include<stdio.h>
int sequence(int a[],int b,int c)
{int i=0;
int step=0;
int index[10];
for(i=0;i<10;i++)
{
    if(step<10)
    {
        index[i]=step;
        step=step+4;
    }
    else
        break;
}

if(index[i-1]!=9)
{
    index[i]=9;
}
int s=i;
int j=0;
while(j<b && a[index[j]]<=c)
{
    
    j++;
}
if(a[index[j-1]]==c)
    {//printf("%d",index[j]) ;
    return index[j];
    }

if(j!=s)
{
    int end=index[j]-1;
    int begin=index[j-1]+1;
    for(int k=begin;k<=end;k++)
    {
        if(a[k]==c)
        //printf("%d",k) ;
        return k;
    }
return -1;
    
}
return -1;

}
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b=10;
    int c=11;
    printf("%d",sequence(a,b,c));
    //sequence(a,b,c);
}