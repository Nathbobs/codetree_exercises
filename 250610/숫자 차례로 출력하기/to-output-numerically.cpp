#include <iostream>

using namespace std;

int N;

void printAscending(int n) {
    if (n == 0) return;
    printAscending(n - 1);
    cout << n << " ";
}

void printDescending(int n) {
    if (n == 0) return;
    cout << n << " ";
    printDescending(n - 1);
}

int main() {
    cin >> N;

    printAscending(N);
    cout << endl;
    printDescending(N);
    cout << endl;

    return 0;
}