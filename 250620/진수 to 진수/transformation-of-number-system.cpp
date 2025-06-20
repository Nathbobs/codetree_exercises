#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    // Convert n from base a to decimal
    int dec = 0;
    for (char c : n) {
        dec = dec * a + (c - '0');
    }

    // Convert decimal to base b
    if (dec == 0) {
        cout << 0;
        return 0;
    }
    vector<int> res;
    while (dec > 0) {
        res.push_back(dec % b);
        dec /= b;
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }

    return 0;
}
