#include <iostream>

using namespace std;

int a, b;

void modify(int &x, int &y) {
    if (x < y) {
        x += 10;
        y *= 2;
    } else {
        y += 10;
        x *= 2;
    }
}

int main() {
    cin >> a >> b;

    modify(a, b);
    cout << a << " " << b;

    return 0;
}