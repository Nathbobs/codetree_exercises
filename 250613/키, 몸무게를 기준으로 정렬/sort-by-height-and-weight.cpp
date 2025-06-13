#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Person {
    string name;
    int height;
    int weight;
};

int n;
Person people[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> people[i].name >> people[i].height >> people[i].weight;
    }

    sort(people, people + n, [](const Person& a, const Person& b) {
        if (a.height != b.height) return a.height < b.height; // ascending height
        return a.weight > b.weight; // descending weight if height is same
    });

    for (int i = 0; i < n; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    }

    return 0;
}