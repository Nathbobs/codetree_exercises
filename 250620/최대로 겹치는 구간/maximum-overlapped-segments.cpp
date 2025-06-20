#include <iostream>
#include <algorithm>
using namespace std;

int n;
int x1[100], x2[100];
int start[100], end[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        start[i] = x1[i];
        end[i] = x2[i];
    }

    int max_overlap = 0;
    // Check each integer point (excluding endpoints)
    for (int p = -99; p <= 99; p++) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (x1[i] < p && p < x2[i]) cnt++;
        }
        if (cnt > max_overlap) max_overlap = cnt;
    }
    cout << max_overlap;
    return 0;
}
