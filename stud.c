#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    char name[20];
    double per;
};
void input(struct student *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
    scanf("%d%s%lf",&((ptr+i)->roll),((ptr+i)->name),&((ptr+i)->per));
 
    }
}
void output(struct student *ptr,int n)
{
for(int i=0;i<n;i++)
    {
    
    printf("%d %s %lf\n",((ptr+i)->roll),((ptr+i)->name),((ptr+i)->per));
    }
}
void main()
{
    struct student *ptr;
    int n;
    scanf("%d",&n);
    ptr=(struct student *) malloc(n*sizeof(struct student));
    input(ptr,n);
    output(ptr,n);    
}