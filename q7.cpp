#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping (using temporary variable) a="<<a<<" b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping (without using temporary variable)     a="<<a<<" b="<<b;
}