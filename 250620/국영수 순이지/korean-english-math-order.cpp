#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> korean[i] >> english[i] >> math[i];
    }

    // Sort students by Korean, then English, then Math scores in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (korean[j] < korean[j + 1] ||
               (korean[j] == korean[j + 1] && english[j] < english[j + 1]) ||
               (korean[j] == korean[j + 1] && english[j] == english[j + 1] && math[j] < math[j + 1])) {
                swap(korean[j], korean[j + 1]);
                swap(english[j], english[j + 1]);
                swap(math[j], math[j + 1]);
                swap(name[j], name[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << name[i] << " " << korean[i] << " " << english[i] << " " << math[i] << "\n";
    }

    return 0;
}
