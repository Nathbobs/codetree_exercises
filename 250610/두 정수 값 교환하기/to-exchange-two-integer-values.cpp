#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int n, m;

int main() {
    cin >> n >> m;

    swapValues(n, m);

    cout << n << " " << m << endl;

    return 0;
}