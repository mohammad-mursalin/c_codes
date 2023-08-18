#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char name[20];

    cout<<"Enter your name : ";
    cin>>name;
    cout << "Assalamualaikum "<<name<<endl;

    char fullname[20];
    cout<<"Enter your name : ";
    gets(fullname);
    cout << "Assalamualaikum "<<fullname<<endl;

    return 0;
}