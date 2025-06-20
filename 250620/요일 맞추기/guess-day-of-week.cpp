#include <iostream>
using namespace std;

int m1, d1, m2, d2;
int days_in_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int diff = 0;
    if(m1 == m2) {
        diff = d2 - d1;
    } else {
        diff += days_in_month[m1] - d1;
        for(int m = m1 + 1; m < m2; ++m) {
            diff += days_in_month[m];
        }
        diff += d2;
    }

    cout << week[(0 + diff % 7 + 7) % 7] << endl;
    return 0;
}
