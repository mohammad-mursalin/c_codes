#include<stdio.h>

int main()
{
    FILE *file;

    char name[50];

    file = fopen("DemoFile.txt","r");

    if(file = NULL)
    {
        printf("File is not created");
    }

    else
    {
        printf("File is opened");

        fgets(name,50,file);  //fscanf(file,"%s ",&name);
        printf("Name : %s ",name);

        fclose(file);
    }
}