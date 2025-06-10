#include <iostream>

using namespace std;

int n, m;
int A[100];

int process(int m, int A[]) {
    int sum = 0;
    while (m > 1) {
        sum += A[m - 1];
        if (m % 2 == 1) m -= 1;
        else m /= 2;
    }
    sum += A[0]; // Add A[1] element when m = 1
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << process(m, A);

    return 0;
}