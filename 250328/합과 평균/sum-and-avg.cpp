#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int sum = a+b;

    float avg = (float)sum / 2;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}