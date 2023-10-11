#include<stdio.h>

int main()
{
    int firstNum,secondNum,fiboNum,n;

    firstNum=0;
    secondNum=1;

    printf("Enter the number of terms you wanna see the series : ");
    scanf("%d",&n);

    printf("Fibonacci series : 0 1");
    
    for(int i=3;i<=10;i++)
    {
        fiboNum=firstNum+secondNum;
        firstNum=secondNum;
        secondNum=fiboNum;
        printf(" %d",fiboNum);
    }
}