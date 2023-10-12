#include<stdio.h>

int main()
{
    int n,sum=0;

    printf("Total numbers will be : ");
    scanf("%d",&n);

    int num[n];

    printf("Enter the numbers : ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+num[i];
    }

    printf("Sum = %d\n",sum);

    return 0;
}