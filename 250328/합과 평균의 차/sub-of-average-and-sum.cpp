#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >>a >>b >>c;
    int sum = a + b + c;
    float avg = (float)sum/3;
    int value = sum - avg;

    cout << sum << "\n" << avg << "\n" << value;
    return 0;
}