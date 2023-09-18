#include<stdio.h>

int main()
{
    int i,sum;
    sum=0;

    printf("Output: ");

    for(i=2;i<=20;i=i+2)
    {
        printf(" %d ",i);
        sum=sum+i;
    }

    printf("\nValue=%d",sum);

    return 0;
}