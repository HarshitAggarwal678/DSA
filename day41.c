#include<stdio.h>
int palindrome(int n)
{static int sum=0;
if(n==0)
return sum;
else
{sum=(n%10)+sum*10;
return (palindrome(n/10));}

}
void main()
{int n;int sum=0;
scanf("%d",&n);
int a=n;
//printf("%d",n);
int b=palindrome(n);
if(a==b)
printf("palin");
else
printf("not");

}