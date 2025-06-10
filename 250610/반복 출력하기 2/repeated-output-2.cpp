#include <iostream>

using namespace std;

int N;

void printHello(int n) {
    if (n == 0) return;
    cout << "HelloWorld" << endl;
    printHello(n - 1);
}

int main() {
    cin >> N;
    printHello(N);
    return 0;
}