#include<stdio.h>
void delete(int b[],int a,int c)
{   
    int index=0;
    for(int i=0;i<a;i++)
    {
        if(c==b[i])
        {
            break;
        }
        index++;
    }
    for(int i=index;i<a-1;i++)
    {
        b[i]=b[i+1];
    }
    for(int i=0;i<a-1;i++)
    {
        printf("%d",b[i]);
    }

}
int main()
{   int a,c;
    printf("enter the size of array");
    scanf("%d",&a);
    int b[a];
    printf("enter the elements");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("enter the element to be deleted");
    scanf("%d",&c);
    delete(b,a,c);
}