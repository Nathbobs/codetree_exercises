#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
    }

    // Sort by height using bubble sort (since n <= 10)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (height[j] > height[j + 1]) {
                swap(height[j], height[j + 1]);
                swap(name[j], name[j + 1]);
                swap(weight[j], weight[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << name[i] << " " << height[i] << " " << weight[i] << "\n";
    }

    return 0;
}