//WAP to check the number is palindrome ( intn) that checks if the number is palindrome 
#include <iostream>
using namespace std;
int reverse(int n, int rev = 0) {
    if (n == 0) return rev;  
    return reverse(n / 10, rev * 10 + (n % 10));  
}
bool isPalindrome(int n) {
    return n == reverse(n);  
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}
