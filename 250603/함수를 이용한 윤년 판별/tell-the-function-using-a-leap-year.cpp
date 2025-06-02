#include <iostream>

using namespace std;

bool leapyear(int y){
    if (y % 4 != 0)
        return false;
    if (y % 100 == 0 && y % 400 != 0)
        return false;
    else 
        return true;
    
}

int y;

int main() {
    cin >> y;
    cout << boolalpha<< leapyear(y);

    // Please write your code here.

    return 0;
}