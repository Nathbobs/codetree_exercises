#include <iostream>
#include <string>

using namespace std;

string input, pattern;

int findSubstringIndex(const string &s, const string &t) {
    size_t pos = s.find(t);
    if (pos != string::npos) return pos;
    return -1;
}

int main() {
    cin >> input >> pattern;

    cout << findSubstringIndex(input, pattern);

    return 0;
}