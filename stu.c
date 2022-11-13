#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    double per;
};
void main()
{
    
    struct student *ptr;
    ptr=(struct student *)malloc(n*size)
    for(int i=0;i<4;i++)
    {
    scanf("%d%s%lf",&((ptr+i)->roll),((ptr+i)->name),&((ptr+i)->per));
    
    }
    for(int i=0;i<4;i++)
    {
    
    printf("%d %s %lf",((ptr+i)->roll),((ptr+i)->name),((ptr+i)->per));
    }
    
}