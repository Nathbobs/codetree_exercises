#include <iostream>
#include <string>

using namespace std;

string A;

bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    cin >> A;
    if (isPalindrome(A)) cout << "Yes";
    else cout << "No";
    return 0;
}