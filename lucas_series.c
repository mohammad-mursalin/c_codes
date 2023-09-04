#include<stdio.h>

void lucas(int num_of_terms)
{
    

    int first_num=2,second_num=1;

    

    printf("Lucas series= %d %d ",first_num,second_num);

    for(int i=3;i<=num_of_terms;i++)
    {
        int next=first_num+second_num;
            first_num=second_num;
            second_num=next;

        printf("%d ",next);
    }
}

int main()
{

    int num_of_terms;

    printf("Enter the number of terms you wanna see the lucas series : ");
    scanf("%d",&num_of_terms);


    lucas(num_of_terms); 
    
}