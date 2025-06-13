#include <iostream>
#include <string>

using namespace std;

struct Bomb {
    string defusal_code;
    char wire_color;
    int second;
};

int main() {
    Bomb bomb;
    cin >> bomb.defusal_code >> bomb.wire_color >> bomb.second;

    cout << "code : " << bomb.defusal_code << endl;
    cout << "color : " << bomb.wire_color << endl;
    cout << "second : " << bomb.second << endl;

    return 0;
}