//wap prints all numbers between 1 and 500 skipping number divisible by number 3 and 7stop printing numbers if the sum of printed numbers exceed 1000
#include<iostream>
using namespace std;
int main (){
    int sum=0;
    for ( int i=1 ; i<=500 ; i++ ){
    if ( i % 3 ==0 && i % 7 ==0){
        continue;
    }
    cout<<i<<" ";
    sum+=i;
    if ( sum > 1000 ){
        break;
    }
}
cout<<"/nstopped printing as the sum exceeded 1000.\n";
return 0;
}