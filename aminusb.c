#include<stdio.h>
void symmetry(int a[],int m,int b[],int n)
{   int k=0;
    int i=0;
    int j=0; 
    int c[10];
    while (i<5 & j<5)
    {
        if(b[i]<a[j]  )
        {
            c[k]=b[i];
            i=i+1;
            k=k+1;
        }
        else if(a[i]==b[j])
        {
            
            
            i=i+1;
            j=j+1;
        }
        else
        {
            j=j+1;
        }
        
    
    }
    while(i<5)
    {c[k]=b[i];
    i=i+1;
    k=k+1;
    }
    
    for(int z=0;z<k;z++)
    {
        printf("%d",c[z]);
    }

}
int main()
{
    int a[5]={1,3,5,7,9};
    int b[5]={2,3,6,8,9};
    symmetry(a,5,b,5);
    return 0;
    
}