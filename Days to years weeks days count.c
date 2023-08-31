#include<stdio.h>
int main()
{
    int D=1329,y,w,d,r1,r2;

    printf("Enter the numbers of days=");
    scanf("%d",&D);

    y=D/365;
    r1=D%365;
    w=r1/7;
    r2=r1%7;
    d=r2;

    printf("Total days=%d\nYears=%d\nWeeks=%d\nDays=%d",D,y,w,d);

    return 0;



}
