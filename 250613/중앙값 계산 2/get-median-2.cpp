#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int nums[100];

int main() {
    cin >> n;
    vector<int> temp;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        temp.push_back(nums[i]);
        if ((i + 1) % 2 == 1) {
            sort(temp.begin(), temp.end());
            cout << temp[i / 2] << " ";
        }
    }

    return 0;
}