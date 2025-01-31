#include<iostream>
#include<math.h>
using namespace std ;
int main (){
    float p,r,t,ci;
    float n=12;
    cout<<"enter principal amount : ";
    cin>>p;
    cout<<"enter rate of interest : ";
    cin>>r;
    cout<<"enter time period : ";
    cin>>t;
    ci = p * pow((1 + r / (n * 100)), n * t) - p;
    cout<<"compound interest : "<< ci <<endl ; 
    return 0;
}