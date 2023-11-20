#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char name[20] = "Mursalin lamon";

    int len = strlen(name);

    file = fopen("FileDemo.txt","w");

    if (file==NULL)
    {
        printf("File does not exist");
    }

    else
    {
        printf("File is ready for operation");

        for(int i = 0 ; i<len ; i++)
        {
            fputc(name[i],file);
        }

        fputs("\n",file);

        fputs(name,file);

        fprintf(file,"\n%s",name);
        
        fclose(file);
    }
    
}