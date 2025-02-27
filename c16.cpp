// WAP int findlargest( int count ) that takes a variable mumber of integer arguments and returns the largest number among them the first argument count will specify how many numbers are passed
#include <iostream>
#include <cstdarg>
using namespace std;
int findlargest(int count, ...) {
    va_list args;
    va_start(args, count);
    int max = va_arg(args, int);  
    for (int i = 1; i < count; i++) {  
        int temp = va_arg(args, int);
        if (temp > max) {
            max = temp;
        }
    }
    va_end(args);
    return max;
}
int main() {
    cout << "Largest Number is " << findlargest(4, 1, 2, 3, 4) << endl;
    cout << "Largest Number is " << findlargest(3, 3, 5, 7) << endl;
    return 0;
}
