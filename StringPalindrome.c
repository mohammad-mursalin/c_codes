#include<stdio.h>
#include<string.h>

int main()
{
    char name[30];

    printf("Enter a name : ");
    gets(name);

    int len = strlen(name);

    char temp[30];

    int i,j;

    for(i = 0, j = len-1; i<len,j>=0;i++,j--)
    {
        temp[j] = name[i];
    }
    

    int c = strcmp(name,temp);

    if(c==0)
    printf("palindrome");

    else
    printf("not");

    return 0;
}