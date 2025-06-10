#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;}

bool digitSumEven(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 0;}

int countSpecialPrimes(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) && digitSumEven(i))
            count++;
    }
    return count;}



int a, b;

int main() {
    cin >> a >> b;
    cout << countSpecialPrimes(a, b) << endl;

    // Please write your code here.

    return 0;
}