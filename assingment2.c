#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i;
    int sum = 0;
    printf("enter the initial value:");
    scanf("%d", &n);
    for (i = n; i < n + 20; i = i + 2)
    {
        sum = sum + i;
    }
    printf("the sum: %d", sum);

    return 0;
}
