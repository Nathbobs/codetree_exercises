#include <iostream>

using namespace std;

int n;

void printStars(int count) {
    if (count == 0) return;
    for (int i = 0; i < count; i++) {
        cout << "* ";
    }
    cout << endl;
}

void pattern(int num) {
    if (num == 0) return;

    printStars(num);       // Print decreasing
    pattern(num - 1);      // Recurse
    printStars(num);       // Print increasing
}

int main() {
    cin >> n;
    pattern(n);
    return 0;
}