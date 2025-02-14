#include<iostream>
   using namespace std;
   int main(){
     int a,b;
     cout<< "enter two integers : ";
     cin>>a>>b;
     if((a^b)<0)
     cout<<"opposite sign :";
     else
     cout<<" same sign : ";
     return 0;

   }