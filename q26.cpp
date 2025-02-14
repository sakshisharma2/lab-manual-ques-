//WAP to generate and display first n prime numbers using combination of for and while loops 
#include <iostream>
using namespace std;
bool isPrime (int n ){
    if (n<2) return false;
    for(int i=2;i*i<=n;i++)
    if(n%i==0) return false;
    return true ;
}
    int main(){
        int n , count =0 , num=2;
        cin>>n;
        while ( count<n){
            if (isPrime(num))cout<<num<<" ",count++;
            num++;
        } 
return 0;
    }