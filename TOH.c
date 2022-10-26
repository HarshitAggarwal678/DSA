#include<stdio.h>
void TOH(int N,char S,char M,char D)
{
    if(N==1)
        printf("\n%c-->%c",S,D);
    else
    {
        TOH(N-1,S,D,M);
        printf("\n%c-->%c"S,D);
        TOH(N-1,M,S,D);
    }
    
}
int main()
{
    
}