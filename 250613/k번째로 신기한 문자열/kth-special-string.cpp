#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    vector<string> filtered;
    for (int i = 0; i < n; i++) {
        if (str[i].substr(0, t.size()) == t) {
            filtered.push_back(str[i]);
        }
    }

    sort(filtered.begin(), filtered.end());

    cout << filtered[k - 1] << endl;

    return 0;
}