#include <iostream>

using namespace std;

char binary[9];

int main() {
    cin >> binary;

    int result = 0;
    for (int i = 0; binary[i] != '\0'; i++) {
        result = result * 2 + (binary[i] - '0');
    }
    cout << result;

    return 0;
}
