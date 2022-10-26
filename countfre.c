#include<stdio.h>
#include<string.h>
int dat[26];
void main()
{//int dat[26]={0};
char a[20];
gets(a);
int i=0;
while(a[i]!='\0')
{
    dat[a[i]-'a']++;
    i++;
}
for(int j=0;j<26;j++)
{if(dat[j]!=0)
{
    printf("%c %d\n",(j+'a'),dat[j]);
}
}
}