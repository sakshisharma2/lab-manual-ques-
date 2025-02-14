 #include<iostream>
using namespace std;
unsigned int leftshift(unsigned int num  , int shift){
    return (num<<shift)|(num>>(32-shift));
}
unsigned int rightshift(unsigned int num,  int shift){
    return ( num>>shift)| (num<<(32-shift));
}
int main(){
    unsigned int num,shift;
    cout<<"enter number and shift :";
    cin>>num>>shift;
    cout<<"left :"<<leftshift(num,shift) << endl <<"right:"<<rightshift(num,shift)<<endl;
    return 0;
} 