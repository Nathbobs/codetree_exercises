#include <iostream>
#include <vector>
using namespace std;

int N, B;

int main() {
    cin >> N >> B;

    vector<int> digits;
    if (N == 0) digits.push_back(0);
    while (N > 0) {
        digits.push_back(N % B);
        N /= B;
    }
    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}
