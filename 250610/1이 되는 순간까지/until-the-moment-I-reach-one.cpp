#include <iostream>
using namespace std;

int countOperations(int n) {
    if (n == 1)
        return 0;

    if (n % 2 == 0) {
        return 1 + countOperations(n / 2);
    } else {
        return 1 + countOperations(n / 3);
    }
}
int N;

int main() {
    cin >> N;
    cout << countOperations(N) << endl;
    return 0;
}