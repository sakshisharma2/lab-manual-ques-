#include<iostream>
using namespace std;
int main()
{
    const int factor=2;
    double length,width;
    cout<<"enter the length of the rectangle :";
    cin>>length;
    cout<<"enter the width of the rectangle :";
    cin>>width;
    double perimeter = factor*(length + width);
    double area = length*width;
    cout<<"perimeter of the rectangle is :"<<perimeter<<endl;
    cout<<"area of the rectangle is : "<<area<<endl;
    return 0;
}