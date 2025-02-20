// WAP int maxnumber(inta,intb that takes the two integers as parameter and returns the larger one )
#include <iostream>
int maxNumber(int a, int b) {
    if (a > b) {
        return a;  // If a is greater, return a
    } else {
        return b;  // Otherwise, return b
    }
}

int main() {
    int num1 = 10, num2 = 20;
    std::cout << "The larger number is: " << maxNumber(num1, num2) << std::endl;
    return 0;
}
