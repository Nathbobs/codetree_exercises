#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int weight = 13;
    float moon = 0.165;

    cout << fixed;

    cout.precision(6);
    cout << weight << " * " << moon << " = " << weight * moon;
    return 0;
}