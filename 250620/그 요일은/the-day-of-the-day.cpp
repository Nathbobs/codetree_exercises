#include <iostream>
using namespace std;

int m1, m2, d1, d2;
string A;

int days_in_month[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31}; // 2024 is leap year
string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    // Calculate the day of year for (m1, d1) and (m2, d2)
    int start = 0, end = 0;
    for(int i = 1; i < m1; ++i) start += days_in_month[i];
    start += d1;
    for(int i = 1; i < m2; ++i) end += days_in_month[i];
    end += d2;

    // Jan 1, 2024 is Monday, so day 1 is Monday
    int cnt = 0;
    for(int i = start; i <= end; ++i) {
        int w = (i - 1) % 7; // (i-1) because Jan 1 is day 1
        if(week[w] == A) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
