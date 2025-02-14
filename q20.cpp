#include<iostream>
   using namespace std;
   int main(){
    int choice;
    float num1,num2;
    while (true){
        cout<<endl<<"add"<<endl<<"subtract"<<endl<<"multiply"<<endl<<"divide"<<endl<<"exit"<<endl ;
        cout<<"enter choice";
        cin>>choice;
        if (choice==5) break;
        cout<<"enter two numbers : ";
        cin>>num1>>num2;
        switch(choice){
            case 1 : cout<<"result : "<<num1+num2<<endl;break;
            case 2 : cout<<"result : "<<num1-num2<<endl;break;
            case 3 : cout<<"result : "<<num1*num2<<endl;break;
            case 4 :  if (num2 != 0) cout<<"result : "<< num1 / num2 <<endl;
            else cout<<"error! divison by zero"<<endl;
            break;
            default : cout<<"invalid choice ! "<<endl;
        }
    }
    return 0;
   }
   
  