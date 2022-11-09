#include<stdio.h>
void main()
{   
    int a,z,c,e,r,g,h;
    scanf("%d",&a);   
    int b[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
            b[i][j]=0;
    }    
    z=a*a;   
    c=a/2;   
    r=0;
    b[r][c]=1;
    e=2;
    g=r;
    h=c;    
    while(e!=z+1)
    {
        r=r-1;
        c=c+1;
        if(r<0)
        {
            r=a-1;
            if(c>a-1)
                c=0;
            if(b[r][c]==0)
            {
                b[r][c]=e;
                e++;
                g=r;
                h=c;                
            }
            else
            {   
                r=g+1;
                c=h;
                b[r][c]=e;
                e++;
                g=r;
                h=c;
                
            }
        }
        else if(c>a-1)
        {
            c=0;
            if(r<0)
                r=a-1;
            if(b[r][c]==0)
            {
                b[r][c]=e;
                g=r;
                h=c;
                e++;                
            }
            else
            {   
                r=g+1;
                c=h;
                b[r][c]=e;
                g=r;
                h=c;
                e++;          
            }
        }
        else
        {
            if(b[r][c]==0)
            {
                b[r][c]=e;
                g=r;
                h=c;
                e++;               
            }
            else
            {   
                r=g+1;
                c=h;
                b[r][c]=e;
                g=r;
                h=c;
                e++;                
            }
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }
}