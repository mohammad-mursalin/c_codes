#include<stdio.h>

int main()
{
    FILE *file;

    char name[] = "Mursalin";

    file = fopen("Getc.txt","w");

    if(file == NULL)
    {
        printf("File isn't opened");
    }

    else
    {
        // fputs(name,file);

        // int len = strlen(name);

        for(int i = 0; i< strlen(name); i++)
        {
            char c = name[i];
            fputc(c,file);
        }

        fclose(file);

        file = fopen("Getc.txt","r");

        while(!feof(file))
        {
            char c = fgetc(file);

            printf("%c",c);
        }
        
        fclose(file);
    }
}