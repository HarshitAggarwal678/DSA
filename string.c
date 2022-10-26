#include<stdio.h>
#include<string.h>
void main()
{int flag=0;
    char name[20];
    gets(name);
    printf("%s\n",name);
    puts(name);
    int i=0;

    while(name[i]!='\0')
    {i=i+1;
    }
    printf("%d",i);
    int j;
    j=0;
    i=i-1;
    char c ;
    while(j<i)
    {
        c=name[i];
        name[i]=name[j];
        name[j]=c;
        j++;
        i--;
    }
    /*while(j<i)
    {
        if(name[i]!=name[j])
        {
            flag=1;
            break;
        }
        j++;
        i--;

    }*/
    /*printf("%d",i);
    if(flag==1)
    {
        printf("not");

    }
    else{
        printf("yes");
    }*/
puts(name);
}