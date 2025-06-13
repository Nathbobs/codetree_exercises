#include <iostream>
#include <string>

using namespace std;

struct Product {
    string name;
    int code;
};

int main() {
    Product product1 = {"codetree", 50};
    Product product2;

    cin >> product2.name >> product2.code;

    cout << "product "<< product1.code << " is "<< product1.name << " "  << endl;
    cout << "product " << product2.code << " is "<< product2.name << " "  << endl;

    return 0;
}