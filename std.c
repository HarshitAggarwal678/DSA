#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    double per;
};
void main()
{
    struct student s[5];
    struct student *ptr;
    ptr=(struct student *)malloc(5*sizeof(struct student));
    for(int i=0;i<4;i++)
    {
    scanf("%d%s%lf",&((ptr+i)->roll),((ptr+i)->name),&((ptr+i)->per));
    
    }
    for(int i=0;i<4;i++)
    {
    
    printf("%d %s %lf\n",((ptr+i)->roll),((ptr+i)->name),((ptr+i)->per));
    }
    
}