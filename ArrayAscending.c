#include<stdio.h>

int main()
{
    int n[5] = {3,2,5,1,7};
    int m;

    for(int i = 0 ; i<5 ; i++)
    {
        for(int j = i+1 ; j<5 ; j++)
        {
            if(n[j]<n[i])
            {
                m = n[i];
                n[i] = n[j];
                n[j] = m;
            }
        }
    }

    for(int i = 0 ; i<5 ; i++)
    {
        printf("%d ",n[i]);
    }

}