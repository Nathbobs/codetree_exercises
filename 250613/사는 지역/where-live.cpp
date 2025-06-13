#include <iostream>

#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> street_address[i] >> region[i];
    }

    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (name[i] > name[idx]) {
            idx = i;
        }
    }

    cout << "name " << name[idx] <<"\n"<<"addr "<< street_address[idx] <<"\n"<< "city "<< region[idx] << "\n";

    return 0;
}