#include<stdio.h>

int main()
{
    int nums[5] = {3,2,5,6,1};

    for(int i = 0; i<5 ; i++)
    {
        for(int j = 0 ; j<5 ; j++)
        {
            if(nums[i]<nums[j])
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }

    for(int i = 0 ; i<5 ; i++)
    {
        printf("%d ",nums[i]);
    }
    
    return 0;
}