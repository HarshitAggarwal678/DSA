#include<stdio.h>
#include<malloc.h>
struct Student
{
int RollNo;
char Name[20];
double perc;
};
void Input(struct Student *ptr,int N)
{
int i=0;
for(i=0;i<N;i++)
scanf("%d%s%lf",&((ptr+i)->RollNo),(ptr+i)->Name,&((ptr+i)->perc));
}
void OutPut(struct Student *ptr,int N)
{
int i=0;
for(i=0;i<N;i++)
printf("%d %s %lf\n",(ptr+i)->RollNo,(ptr+i)->Name,(ptr+i)->perc);
}
int main(){
int N;
struct student *p;
printf("How many elements do you want to input ");
scanf("%d",&N);
p=(struct student *)malloc(N*sizeof(struct Student));
Input(p,N);
OutPut(p,N);
return 0;
}
