#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string N;

int main() {
    cin >> N;

    // Convert binary string to decimal
    int dec = 0;
    for (char c : N) {
        dec = dec * 2 + (c - '0');
    }

    // Multiply by 17
    dec *= 17;

    // Convert decimal to binary string
    if (dec == 0) {
        cout << 0;
        return 0;
    }
    string res = "";
    while (dec > 0) {
        res += (dec % 2) + '0';
        dec /= 2;
    }
    reverse(res.begin(), res.end());
    cout << res;

    return 0;
}
