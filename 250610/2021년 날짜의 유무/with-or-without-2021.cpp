#include <iostream>
using namespace std;

bool isValidDate(int M, int D) {
    int daysInMonth[13] = {
        0,  // index 0 unused
        31, // January
        28, // February (2021 is not a leap year)
        31, // March
        30, // April
        31, // May
        30, // June
        31, // July
        31, // August
        30, // September
        31, // October
        30, // November
        31  // December
    };
    if (M < 1 || M > 12) return false;
    if (D < 1 || D > daysInMonth[M]) return false;
    return true;    
    
}

int M, D;

int main() {
    cin >> M >> D;
    
    if (isValidDate(M, D))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    // Please write your code here.

    return 0;
}