#include <iostream>

using namespace std;

int minimum (int a, int b, int c){
    int min;
    if (a < b && a < c){
        min = a;
    } else if( b < a && b < c){
        min = b;
    } else{
        min = c;
    }
    return min;
}

int a, b, c;

int main() {
    cin >> a >> b >> c;
    
    int minimums = minimum (a,b,c);
    cout << minimums;

    // Please write your code here.

    return 0;
}