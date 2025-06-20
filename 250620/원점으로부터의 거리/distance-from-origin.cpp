#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
    int index; // original input order
    int manhattan_dist() const {
        return abs(x) + abs(y);
    }
};

int main() {
    int N;
    cin >> N;
    vector<Point> points(N);

    for (int i = 0; i < N; i++) {
        cin >> points[i].x >> points[i].y;
        points[i].index = i + 1; // 1-based indexing
    }

    sort(points.begin(), points.end(), [](const Point& a, const Point& b) {
        int distA = a.manhattan_dist();
        int distB = b.manhattan_dist();
        if (distA != distB) return distA < distB; // increasing distance
        return a.index < b.index; // if tie, ascending index
    });

    for (const auto& p : points) {
        cout << p.index << "\n";
    }

    return 0;
}
