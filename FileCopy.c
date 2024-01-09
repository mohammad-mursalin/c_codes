#include<stdio.h>

int main()
{
    FILE *f1,*f2;

    char file1[500],file2[500];

    f1 = fopen("file1.txt","r");

    f2 = fopen("file2.txt","w");

    // while(!feof(f1))
    // {
    //     // fscanf(f1,"%s",&file1);

    //     // fprintf(f2,"%s",file1);

    //     char c;

    //     fputc(fgetc(f1),f2);
    // }

    char c;

    while((c = fgetc(f1)) != EOF)
    {
        fputc(c,f2);
    }

    fclose(f1);
    fclose(f2);
}