#include<iostream>
using namespace std;
 int main (){
    int num , fact = 1, i = 1;
    cout<<"enter a number";
    cin>>num;
    while ( i<=num){
        fact*=i;
        i++;
      }
      cout<<"factorial of"<< num <<"is"<<fact<<endl;
      return 0;
}