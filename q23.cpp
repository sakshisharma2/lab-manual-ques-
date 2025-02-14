#include<iostream>
   using namespace std;
   int main (){
   int num , i=2;
   cout<<"enter a number : ";
   cin>>num;
   if (num<=1) {
    cout<<num<<" is not a prime number  "<<endl ;
    return 0;
   }
   while ( i*i<=num ){
    if (num%i==0){
        cout<<num<<"is not a prime number  "<<endl;
        return 0 ;
    }
    i++;
   }
   }