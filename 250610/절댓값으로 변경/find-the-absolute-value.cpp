#include <iostream>
#include <cmath>

using namespace std;

int n;
int arr[50];

void applyAbsolute(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = abs(arr[i]);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    applyAbsolute(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}