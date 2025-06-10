#include <iostream>

using namespace std;

int factorial(int n) {
    if (n <= 1) return 1; // Base case: 0! = 1 and 1! = 1
    return n * factorial(n - 1);
}

int main() {
    int N;
    cin >> N;

    cout << factorial(N) << endl;

    return 0;
}