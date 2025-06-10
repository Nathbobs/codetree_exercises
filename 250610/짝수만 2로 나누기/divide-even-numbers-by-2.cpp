#include <iostream>
using namespace std;

int n;
int arr[50];

// Function to divide even numbers by 2
void processArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            a[i] /= 2;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the function to modify the array
    processArray(arr, n);

    // Print modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}