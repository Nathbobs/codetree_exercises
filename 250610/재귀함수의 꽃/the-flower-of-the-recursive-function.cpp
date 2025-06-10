#include <iostream>

using namespace std;

int N;

void printSequence(int n) {
    if (n == 0) return;

    cout << n << " ";
    printSequence(n - 1);
    cout << n << " ";
}

int main() {
    cin >> N;
    printSequence(N);
    return 0;
}