#include <iostream>
#include <string>

#define MAX_N 5

using namespace std;

struct Agent {
    string codename;
    int score;
};

Agent agents[MAX_N];

int main() {
    for (int i = 0; i < MAX_N; i++) {
        cin >> agents[i].codename >> agents[i].score;
    }

    int minIndex = 0;
    for (int i = 1; i < MAX_N; i++) {
        if (agents[i].score < agents[minIndex].score) {
            minIndex = i;
        }
    }

    cout << agents[minIndex].codename << " " << agents[minIndex].score << endl;

    return 0;
}