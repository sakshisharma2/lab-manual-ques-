 #include<iostream>
 #include<iomanip>
using namespace std;
int main (){
   double a,b;
    cout<<" Enter dividend : ";
    cin>>a;
    cout<<" enter divisor : ";
    cin>>b;
    if (b==0) {
        cout<<" error! : division by zero is not allowed "<<endl ;
        return 1;
    }
    cout<<"the quotient is fixed"<<fixed<<setprecision(6)<<(a/b)<<endl;
    return 0;
    }