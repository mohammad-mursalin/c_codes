#include<stdio.h>

int main()
{
    FILE *f1,*f2;

    int n,w;

    f1 = fopen("Even.txt","w");

    f2 = fopen("Odd.txt","w");

    printf("How much number you wanna store : ");

    scanf("%d",&n);

    for(int i = 1 ; i<=n ; i++)
    {
        if(i%2==0)
        {
            putw(i,f1);
        }
        else
        {
            putw(i,f2);
        }
    }

    fclose(f1);

    fclose(f2);

    f1 = fopen("Even.txt","r");

    f2 = fopen("Odd.txt","r");

    printf("All even numbers : ");

    while(!feof(f1))
    {
        printf("%d ",getw(f1));
    }

    printf("\nAll odd numbers : ");

    while((w = getw(f2)) !=EOF)
    {
        printf("%d ",w);
    }

    fclose(f1);

    fclose(f2);
}