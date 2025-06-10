#include <iostream>

using namespace std;

bool isWholeNumber(int n) {
    if (n % 2 == 0) return false;          
    if (n % 10 == 5) return false;          
    if (n % 3 == 0 && n % 9 != 0) return false; 
    return true; 
}

int countWholeNumbers(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isWholeNumber(i))
            count++;
    }
    return count;
}






int a, b;
int main() {
    cin >> a >> b;

    cout << countWholeNumbers(a, b) << endl;
    // Please write your code here.

    return 0;
}