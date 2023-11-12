#include<stdio.h>

int main()
{
    FILE *file;

    char name[50];

    file = fopen("DemoFile.txt","a");

    if(file = NULL)
    {
        printf("File is not created");
    }

    else
    {
        printf("File is opened");

        printf("Enter name : ");
        gets(name);
        fprintf(file , "%s \n",name);

        printf("File is written successfully");

        fclose(file);
    }
}