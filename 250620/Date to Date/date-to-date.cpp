#include <iostream>
using namespace std;

int m1, d1, m2, d2;
int days_in_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int days = 0;
    if(m1 == m2) {
        days = d2 - d1 + 1;
    } else {
        days += days_in_month[m1] - d1 + 1;
        for(int m = m1 + 1; m < m2; ++m) {
            days += days_in_month[m];
        }
        days += d2;
    }
    cout << days << endl;
    return 0;
}
