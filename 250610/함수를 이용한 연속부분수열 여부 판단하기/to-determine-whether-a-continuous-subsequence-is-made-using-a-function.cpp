#include <iostream>
using namespace std;

int n1, n2;
int a[100], b[100];

bool isContiguousSubsequence(int a[], int n1, int b[], int n2) {
    for (int i = 0; i <= n1 - n2; i++) {
        bool match = true;
        for (int j = 0; j < n2; j++) {
            if (a[i + j] != b[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];

    if (isContiguousSubsequence(a, n1, b, n2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}