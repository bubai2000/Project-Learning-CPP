#include<iostream>
using namespace std;

void print(int a)
{
    cout<<"Integer=>"<<a<<endl;
}

void print(double a)
{
    cout<<"Float=>"<<a<<endl;
}

void print(char c)
{
    cout<<"Char=>"<<c<<endl;
}

int main()
{
    print(10);
    print(10.01);
    print('a');
}

