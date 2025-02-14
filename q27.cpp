//develop a program to stimulate a number guessing game where a user has limited attempts to guess a randomly generated number provide feedback for each gues( too high,too low) and terminate the game when number is guessed  or attempts are exhausted in c++
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int number = rand () %100 + 1;
    int guess , attempts = 6;
    cout<<" guess the number  (1 -100)!  you have "<<attempts <<" tries. \n";
    while ( attempts > 0){
        cout<<" enter your guess : ";
        cin>>guess;
        if ( guess==number){
            cout<<" you got it!  the number was "<<number <<".\n ";
            return 0;
        }
        else if ( guess < number ) {
            cout<<" too low ! .\n";
        } 
        else {
            cout<<" too high ! .\n";
        }
        attempts --;
         }
         cout<<" out of tries ! the number was "<< number <<".\n";
         return  0;

}