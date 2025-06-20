#include <iostream>
#include <cstring>
using namespace std;

int n;
int x[100];
char dir[100];
int cnt[4001]; // To cover positions from -2000 to 2000

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    int pos = 0;
    for (int i = 0; i < n; i++) {
        int step = (dir[i] == 'L') ? -1 : 1;
        for (int j = 0; j < x[i]; j++) {
            int next = pos + step;
            int idx = next + 2000;
            cnt[idx]++;
            pos = next;
        }
    }

    int ans = 0;
    for (int i = 0; i <= 4000; i++) {
        if (cnt[i] >= 2) ans++;
    }
    cout << ans;
    return 0;
}
