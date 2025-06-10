#include <iostream>

using namespace std;

int collatzCount(int n) {
    if (n == 1) return 0;
    if (n % 2 == 0) return 1 + collatzCount(n / 2);
    else return 1 + collatzCount(n * 3 + 1);
}

int n;

int main() {
    cin >> n;
    cout << collatzCount(n) << endl;
    return 0;
}