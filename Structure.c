#include<stdio.h>

struct Student
{
    int class;
    char section;
    int age;
    double weight;
};

int main()
{
    struct Student s1,s2,s3,s4,s5;

        s1.class = 5;
        s1.section = 'a';
        s1.age = 15;
        s1.weight = 40;

    printf("Student 1 Information\n");
    printf("class : %d\nSection : %c\nAge : %d\nWeight : %d",s1.class,s1.section,s1.age,s1.weight);

    s2 = {6,'a',16,45};
    


}