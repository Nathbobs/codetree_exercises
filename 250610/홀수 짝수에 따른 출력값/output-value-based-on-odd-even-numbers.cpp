#include <iostream>
using namespace std;

int recursiveSum(int n, bool isOdd) {
    if (n <= 0) return 0;
    if (isOdd) {
        if (n % 2 == 1)
            return n + recursiveSum(n - 2, isOdd);
        else
            return recursiveSum(n - 1, isOdd);
    } else {
        if (n % 2 == 0)
            return n + recursiveSum(n - 2, isOdd);
        else
            return recursiveSum(n - 1, isOdd);
    }
}

int main() {
    int N;
    cin >> N;

    if (N % 2 == 1) {
        cout << recursiveSum(N, true) << endl;
    } else {
        cout << recursiveSum(N, false) << endl;
    }

    return 0;
}