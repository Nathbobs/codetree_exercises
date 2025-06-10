#include <iostream>

using namespace std;

int N;

// Recursive function to compute sum of squares of digits
int sumOfSquares(int n) {
    if (n == 0)
        return 0;
    int digit = n % 10;
    return digit * digit + sumOfSquares(n / 10);
}

int main() {
    cin >> N;
    cout << sumOfSquares(N) << endl;
    return 0;
}