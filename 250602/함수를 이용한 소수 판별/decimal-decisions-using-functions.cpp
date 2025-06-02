#include <iostream>

using namespace std;
bool isPrime(int n){
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int primeSum (int a, int b){
    int sum = 0;
    for (int i = a; i <= b; i++){
        if (isPrime(i)){
            sum += i;
        }
    }
    return sum;

}

int a, b;

int main() {
    cin >> a >> b;
    cout << primeSum(a,b);

    // Please write your code here.

    return 0;
}