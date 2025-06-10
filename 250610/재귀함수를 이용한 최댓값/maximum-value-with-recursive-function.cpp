#include <iostream>

using namespace std;

int n;
int arr[100];

// Recursive function to find max in arr[0..idx]
int findMax(int idx) {
    if (idx == 0) return arr[0];
    int maxInRest = findMax(idx - 1);
    return (arr[idx] > maxInRest) ? arr[idx] : maxInRest;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMax(n - 1) << "\n";

    return 0;
}