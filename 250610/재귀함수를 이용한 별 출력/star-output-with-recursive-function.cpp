#include <iostream>

using namespace std;

int n;

void printStars(int count) {
    if (count == 0) return;
    printStars(count - 1);
    cout << "*";
}

void printPattern(int current, int max) {
    if (current > max) return;
    printStars(current);
    cout << endl;
    printPattern(current + 1, max);
}

int main() {
    cin >> n;

    printPattern(1, n);

    return 0;
}