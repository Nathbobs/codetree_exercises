#include <iostream>
#include <string>

using namespace std;

struct User {
    string id;
    int level;

    void display() {
        cout << "user " << id << " lv " << level << endl;
    }
};

string user2_id;
int user2_level;

int main() {
    cin >> user2_id >> user2_level;

    User user1 = {"codetree", 10};
    User user2 = {user2_id, user2_level};

    user1.display();
    user2.display();

    return 0;
}