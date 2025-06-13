#include <iostream>
#include <string>

using namespace std;

struct Mission {
    string secret_code;
    char meeting_point;
    int times;

    void display() {
        cout << "secret code : " << secret_code << endl;
        cout << "meeting point : " << meeting_point << endl;
        cout << "time : " << times << endl;
    }
};

string secret_code;
char meeting_point;
int times;

int main() {
    cin >> secret_code >> meeting_point >> times;

    Mission m = {secret_code, meeting_point, times};
    m.display();

    return 0;
}