#include<stdio.h>

int main()
{
    int m[3][3] = {{1,2,8},{3,4,9},{5,6,7}};

    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            printf("%d ",m[j][i]);
        }
        printf("\n");
    }
}