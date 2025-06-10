#include <iostream>

using namespace std;

int sequence(int n) {
    if (n == 1) return 2;
    if (n == 2) return 4;
    return (sequence(n - 1) * sequence(n - 2)) % 100;
}

int N;

int main() {
    cin >> N;
    cout << sequence(N) << endl;
    return 0;
}