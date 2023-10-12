#include<stdio.h>

int main()
{
    int n,sum=0;

    printf("Enter the last number : ");
    scanf("%d",&n);

    int num[n];

    for(int i=0;i<n;i++)
    {
        num[i]=i+1;
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+num[i];
    }

    printf("Sum = %d\n",sum);

    return 0;
}