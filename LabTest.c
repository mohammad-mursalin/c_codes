#include<stdio.h>

int add(int a, int b);

int main()
{
    int x=5, y=6;

    int result = add(x,y);   //calling add function and storing returned value in result

    printf("Result : %d\n",result);
}

int add(int a, int b)
{
    int sum = a+b;

    return sum;
}