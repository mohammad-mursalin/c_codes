#include<stdio.h>

int main()
{

    FILE*f1, *f2, *f3;
    int number, i;

    f1 = fopen("DATA","w");

    printf("Enter 10 numbers : ");

    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &number);
        
        putw(number,f1);
    }

    fclose(f1);

    f1 = fopen("DATA","r");

    f2 = fopen("ODD", "w");

    f3 = fopen("EVEN", "w");

    
    while((number = getw(f1)) != EOF)
    {
        if(number %2 == 0)
            putw(number, f3);
        
        else
            putw(number, f2);
    }
    
    fclose(f1);

    fclose(f2);

    fclose(f3);

    f2 = fopen("ODD", "r");

    f3 = fopen("EVEN", "r");

    printf("\nPrinting values of ODD\n");

    while((number = getw(f2)) != EOF)
    {
        printf("%d ", number);
    }

    printf("\nPrinting values of EVEN\n");

    while((number = getw(f3)) != EOF)
    {
        printf("%d ", number);
        
    }

    fclose(f2);

    fclose(f3);

    return 0;
}