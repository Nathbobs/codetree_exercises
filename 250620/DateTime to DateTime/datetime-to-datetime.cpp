#include <iostream>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    int start_day = 11, start_hour = 11, start_min = 11;

    // Check if the target time is earlier than the start time
    if(a < start_day || (a == start_day && b < start_hour) || (a == start_day && b == start_hour && c < start_min)) {
        cout << -1 << endl;
        return 0;
    }

    int start_total = start_day * 24 * 60 + start_hour * 60 + start_min;
    int end_total = a * 24 * 60 + b * 60 + c;

    cout << end_total - start_total << endl;
    return 0;
}
