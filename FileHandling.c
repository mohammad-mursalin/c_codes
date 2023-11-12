#include<stdio.h>

int main()
{
    FILE *file;

    file = fopen("DemoFile.txt","w");

    if(file = NULL)
    {
        printf("File is not created");
    }

    else
    {
        printf("File is created successfully");
        fclose(file);
    }
}