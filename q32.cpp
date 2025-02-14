//develop a program that takes an integer array from users and finds the second largest element 
#include <iostream>
#include <algorithm>  // For sort function
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array should have at least two elements.\n";
        return 1;
    }

    int arr[n];
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>()); // Sort array in descending order

    if (arr[0] == arr[1]) {
        cout << "No second highest element found.\n";
    } else {
        cout << "Second highest element is: " << arr[1] << endl;
    }

    return 0;
}
