#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Student {
    string name;
    int height;
    double weight;
};

int main() {
    int N = 5;
    vector<Student> students(N);

    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].height >> students[i].weight;
    }

    // Sort by name (alphabetically)
    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.name < b.name;
    });

    cout << "name\n";
    for (const auto& s : students) {
        cout << s.name << " " << s.height << " " << fixed << setprecision(1) << s.weight << "\n";
    
    }

    // Sort by height (descending)
    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.height > b.height;
    });

    cout << "\n"<< "height\n";
    for (const auto& s : students) {
        cout << s.name << " " << s.height << " " << fixed << setprecision(1) << s.weight << "\n";
    }

    return 0;
}
