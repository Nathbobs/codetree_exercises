#include <iostream>

using namespace std;

int N;

// Recursive function to calculate sum from 1 to n
int recursiveSum(int n) {
    if (n == 1)
        return 1;
    return n + recursiveSum(n - 1);
}

int main() {
    cin >> N;
    cout << recursiveSum(N) << endl;
    return 0;
}