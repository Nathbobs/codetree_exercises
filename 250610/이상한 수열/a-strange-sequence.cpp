#include <iostream>

using namespace std;

int seq(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return seq(n / 3) + seq(n - 1);
}

int N;

int main() {
    cin >> N;
    cout << seq(N) << endl;
    return 0;
}