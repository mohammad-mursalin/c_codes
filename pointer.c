#include<stdio.h>

int main()
{
	int a=5;
	
	int *p;
	
	p=&a;
	
	printf("value of a=%d\n",a);
	printf("address of a=%d\n",&a);
	printf("value of a=%d\n",p);
	printf("address of a=%d",*p);
}
