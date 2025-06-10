#include <iostream>
#include <string>
#include <set>

using namespace std;

string A;

bool hasAtLeastTwoDifferentAlphabets(const string& s) {
    set<char> unique_chars;
    for (char c : s) {
        if (isalpha(c)) {
            unique_chars.insert(tolower(c));
            if (unique_chars.size() >= 2) return true;
        }
    }
    return false;
}

int main() {
    cin >> A;

    if (hasAtLeastTwoDifferentAlphabets(A)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}