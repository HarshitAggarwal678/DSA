#include <stdio.h>
int main()
{int r,c=0;
int a[10][10];
    printf("enter row");
    scanf("%d",&r);
    printf("enter column");
    scanf("%d",&c);
    printf("enter elements");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {scanf("%d",&a[i][j]);

        }
        
    }
    for(int i=0;i<r;i++)
    {int temp=0;
        for(int j=0;j<c;j++)
        {if(i>j)
        {   temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {printf("%d",a[i][j]);

        }
        printf("\n");
        
    }


}