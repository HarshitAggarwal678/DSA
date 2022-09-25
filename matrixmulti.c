#include <stdio.h>
int main()
{int r,c=0;

    printf("enter row");
    scanf("%d",&r);
    printf("enter column");
    scanf("%d",&c);
    printf("enter elements");
    int a[r][c];
    int b[r][c];
    int d[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {scanf("%d",&a[i][j]);
        }
        
    }
    //for(int i=0;i<r;i++)
    //{
    //    for(int j=0;j<c;j++)
    //    {printf("%d",a[i][j]);
    //    }
    //    printf("\n");
    //}
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {scanf("%d",&b[i][j]);
        }
        
    }
    
}
