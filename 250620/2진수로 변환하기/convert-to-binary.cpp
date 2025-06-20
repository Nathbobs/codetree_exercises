#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    string res = "";
    while (n > 0) {
        res = char('0' + n % 2) + res;
        n /= 2;
    }
    cout << res;
    return 0;
}
