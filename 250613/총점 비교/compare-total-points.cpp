#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> score1[i] >> score2[i] >> score3[i];
    }

    // Sort students by total score (ascending)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            int total_j = score1[j] + score2[j] + score3[j];
            int total_j1 = score1[j+1] + score2[j+1] + score3[j+1];

            if (total_j > total_j1) {
                swap(name[j], name[j+1]);
                swap(score1[j], score1[j+1]);
                swap(score2[j], score2[j+1]);
                swap(score3[j], score3[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << name[i] << " " << score1[i] << " " << score2[i] << " " << score3[i] << "\n";
    }

    return 0;
}