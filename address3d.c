#include<stdio.h>
void main()
{int a[100][100][100];
printf("%u",a[0][0]);
printf("\n");
printf("%u",&a[2][3][4]);
int b=(4-0)*(99-0+1)+(3-0);
printf("\n%u",(a[0]+b));
}
