/*write a program to add two distances in inch-feet using structure
the values of the distances is to be taken from the user
*/
#include<stdio.h>
struct height
{
    int feet;
    int inch;
};
void main()
{
    struct height h1;//={13,5};
    struct height h2;//={7,8};
    printf("enter the feet and inch of 1st");
    scanf("%d%d",&h1.feet,&h1.inch);
    printf("enter the feet and inch of 2nd");
    scanf("%d%d",&h2.feet,&h2.inch);
    struct height h;
    h.inch=(h1.inch+h2.inch)%12;
    h.feet=(h1.feet+h2.feet)+(h1.inch+h2.inch)/12;
    printf("feet=%d inch=%d",h.feet,h.inch);
}   