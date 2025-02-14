#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking input for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Taking input for the array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Displaying the array in reverse order
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
