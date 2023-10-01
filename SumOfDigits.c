#include<stdio.h>

int main()
{
    int num;

    printf("Enter any number : ");
    scanf("%d",&num);

    int temp = num;
    int rem,sum=0;

    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }

    printf("Sum of digits of the given number is %d\n",sum);

    return 0;
}