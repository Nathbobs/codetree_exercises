#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> seq(N); // {value, original_index}
    for (int i = 0; i < N; i++) {
        cin >> seq[i].first;
        seq[i].second = i;
    }

    // Sort by value, stable so earlier indices come first for duplicates
    stable_sort(seq.begin(), seq.end());

    vector<int> result(N);
    for (int i = 0; i < N; i++) {
        // Output is 1-based position
        result[seq[i].second] = i + 1;
    }

    for (int i = 0; i < N; i++) {
        cout << result[i];
        if (i != N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
