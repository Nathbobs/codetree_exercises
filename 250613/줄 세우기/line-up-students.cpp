#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    int height;
    int weight;
    int number; // input order (1-based)
};

int main() {
    int N;
    cin >> N;
    vector<Student> students(N);

    for (int i = 0; i < N; i++) {
        cin >> students[i].height >> students[i].weight;
        students[i].number = i + 1;
    }

    // Sort by:
    // 1) height descending
    // 2) weight descending if height equal
    // 3) number ascending if height and weight equal
    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        if (a.height != b.height) return a.height > b.height;
        if (a.weight != b.weight) return a.weight > b.weight;
        return a.number < b.number;
    });

    for (const auto& s : students) {
        cout << s.height << " " << s.weight << " " << s.number << "\n";
    }

    return 0;
}