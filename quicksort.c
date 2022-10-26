#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int partition(int a[],int low ,int high)
{
    int i,j,mid,temp;
    //mid=(low+high)/2;
    mid=rand()%low+(high-low);
    temp=a[mid];
    a[mid]=a[low];
    a[low]=temp;
    i=low;
    j=high+1;
    int pivot;
    pivot=a[low];
    do
    {
        do
        {
            i=i+1;
        } while (a[i] < pivot);
        do
        {
            j=j-1;
        } while (a[j]>pivot);
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }  
        
    } while (i<j);
    temp=a[j];
    a[j]=a[low];
    a[low]=temp;
    return j;
    

}
void quicksort(int a[],int low,int high)
{int j;
    if (low < high)
    {
        j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
void main()
{
    int a[11]={1,2,5,4,3,6,9,8,7,10};
    a[10]=__INT_MAX__;
    int low = 0;
    int high = 9;
    quicksort(a,low,high);
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}