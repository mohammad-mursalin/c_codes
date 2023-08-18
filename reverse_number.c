#include<stdio.h>

int main()
{
    int num,temp,rem;
    int sum=0;

    printf("Enter the number : ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }

    printf("Reverse of the number is %d\n",sum);
    printf("Sum of this two number is %d",num+sum);

    return 0;
}