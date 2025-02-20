 // WAP int sumofdigits ( int n )that calculates and returns the sum of digits of a given number 
 #include<iostream>
 using namespace std;
 int sumofdigits(int n){
 int sum=0;
 while (n>0){
    sum+=n%10;
    n/=10;
 }
 return sum;
}
int main (){
    int num;
    cout<<" enter a number : ";
    cin>>num;
    cout<<" sum of digits :"<<sumofdigits(num)<<endl;
    return 0;
}
