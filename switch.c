#include<stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter the marks= ");
    scanf("%d",&marks);

    int index = marks/10;

    switch (index)
    {
    case 10:
    case 9:
    case 8:
        grade='H';
        break;
    
    case 6:
    case 7:
        grade='I';

    default:
        grade='F';
        break;
    }
    printf("%c",grade);

    return 0;
}