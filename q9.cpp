#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main (){
    string c;
    int n;
    float f;
    cout<<" enter floating number : " ;
    cin>>c;
    cout<<" enter number : ";
    cin>>n;
    cout<<" enter floating number : ";
    cin>>f;
    const int colWidth1 = 10;
    const int colWidth2 = 10;
    const int colWidth3 = 15;
    cout<<left<<setw(colWidth1)<<"char";
    cout<<left<<setw(colWidth2)<<"number";
    cout<<left<<setw(colWidth3)<<"float"<<endl;
    cout<<left<<setw(colWidth1)<<c;
    cout<<left<<setw(colWidth2)<<n;
    cout<<left<<setw(colWidth3)<<f<<endl;
    return  0;
}