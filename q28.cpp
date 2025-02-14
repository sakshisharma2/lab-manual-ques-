// WAP to displays all armstrong number 
#include <iostream>
using namespace std;
int power(int base, int exp) {
    int result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}
int main() {
    int a, b;
    cout << "Enter start of range: ";
    cin >> a;
    cout << "Enter end of range: ";
    cin >> b;
    int count = 0; 
    for (int i = a; i <= b; i++) {
        int sum = 0, len = 0, temp = i;
        while (temp > 0) {
            len++;
            temp /= 10;
        }
        temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            sum += power(digit, len);
            temp /= 10;
        }
           if (sum == i) {
            count++;
        }
    }
    cout << "Number of Armstrong numbers in given range: " << count << endl;
    
    return 0;
}
