#include <iostream>

using namespace std;

int N;

void PrintNLines(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1 ; j++)
            cout << "12345^&*()_";
        cout << endl;
    }

}

int main() {
    cin >> N;

    // Please write your code here.
    PrintNLines(N);
    return 0;
}