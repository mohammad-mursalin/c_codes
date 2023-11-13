#include<stdio.h>

struct Person
{
    char name[20];
    int age;
    double weight;
};

int main()
{
    struct Person p1;
    p1 = {21,60,"Rafi"};

    printf("Name : %s",p1.name);

}