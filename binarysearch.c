#include<stdio.h>
void bubblesort(int a[],int b)
{int flag=0;
    for(int i=0;i<b;i++)
    {
    
        for(int j=0;j<b-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag++;
            }

        }
        if(flag>0)
        flag=0;
        else
        {
        break;
        }
    
    }
for(int i=0;i<b;i++)
{
    printf("%d",a[i]);
}

}
void main()
{
int a[]={1,2,3,4,5,6,7,8};
bubblesort(a,8);

}
