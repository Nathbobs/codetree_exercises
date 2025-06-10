#include <iostream>
using namespace std;

int sumDigits(int num) {
    if (num == 0) return 0;
    return (num % 10) + sumDigits(num / 10);
}

int a, b, c;

int main() {
    cin >> a >> b >> c;

    int product = a * b * c;
    cout << sumDigits(product) << "\n";

    return 0;
}