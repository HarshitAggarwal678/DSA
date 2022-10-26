#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    gets(a);
    int flag=0;
    int i;
    if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
    { i=1;}
     else
       {
        flag++;
        
       }
    while(a[i]!='\0')
    {
       if(!(a[i]=='_'||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<=9)||a[i]=='$'))
       {
        flag++;
        break;
       } 
       else
       {
        i++;
        
       }
    }

    
   
    if(flag==0)
    {if(i<32)
        printf("Yes");

    }
    else
    printf("not");
}