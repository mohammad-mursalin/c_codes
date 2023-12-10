#include <stdio.h>

int main()
{
    int marks;
    char *sub[] = {"Bangla", "English", "Math", "ICT", "Biology"};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number for %s : ", sub[i]);
        scanf("%d", &marks);

        if (marks <= 100 && marks >= 80)
            printf("A+\n");

        else if (marks < 80 && marks >= 70)
            printf("A-\n");

        else if (marks < 70 && marks >= 65)
            printf("B\n");

        else if (marks < 65 && marks >= 50)
            printf("C\n");

        else
            printf("F\n");
    }

    return 0;
}
