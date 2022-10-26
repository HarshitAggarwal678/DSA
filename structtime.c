#include<stdio.h>
struct time
{   int hour;
    int min;
    int sec;
};
void main()
{
    struct time t1={4,45,55};
    struct time t2={3,34,23};
    struct time t;
    t.sec=(t1.sec+t2.sec)%60;
    t.min=(t1.min+t2.min)%60+(t1.sec+t2.sec)/60;
    t.hour=(t1.hour+t2.hour)+(t1.min+t2.min)/60;
    printf("%d %d %d",t.hour,t.min,t.sec);
}