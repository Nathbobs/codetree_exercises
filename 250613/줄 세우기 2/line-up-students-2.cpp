#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int N;
int h[1000];
int w[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
    }

    vector<tuple<int, int, int>> students;
    for (int i = 0; i < N; i++) {
        students.push_back(make_tuple(h[i], w[i], i + 1));
    }

    sort(students.begin(), students.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
        if (get<0>(a) != get<0>(b)) return get<0>(a) < get<0>(b);  // height ascending
        return get<1>(a) > get<1>(b);                              // weight descending
    });

    for (const auto& [height, weight, number] : students) {
        cout << height << " " << weight << " " << number << endl;
    }

    return 0;
}