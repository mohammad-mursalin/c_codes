#include<stdio.h>

int main()
{
    int n,count=0;

        printf("Enter a positive integer number ");
        scanf("%d",&n);

        if(n==0||n==1)
        {
            printf("%d is not a prime number",n);
        }
        else
        {
            for(int i=2;i<n/2;i++)
            {
                if(n%i==0)
                {
                    count++;
                    break;
                }
            }

            if(count==0)
            {
                printf("%d is a prime number",n);
            }
            else
            {
                printf("%d is not a prime number",n);
            }
        }

    return 0;    
}   
