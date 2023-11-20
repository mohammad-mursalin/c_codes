#include<stdio.h>

int main()
{
    FILE *file;

    char ch;
    char name[30];
    char name1[30];
    char name2[30];

    file = fopen("FileDemo.txt","r");

    if (file = NULL)
    {
        printf("File does not exist");
    }

    else
    {
        printf("File is ready for operation\n");
    }

    while (!feof(file))
    {
        ch = fgetc(file);
        printf("%c",ch);
    }
    while (!feof(file))
    {
        fgets(name,30,file);
        printf("%c",ch);
    }

    fscanf(file,"%s %s",&name1,&name2);
    printf("%s %s\n",name1,name2);
    
    


    fclose(file);
    
}