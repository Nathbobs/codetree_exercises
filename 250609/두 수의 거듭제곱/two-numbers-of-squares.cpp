#include <iostream>

using namespace std;

int square (int a, int b){
    while( 1 <= a && b <= 10){
        for (int i = 0; i < b; i++){
            a *= a * b[i];

            return a;
        }
    }
}



int a, b;
int main() {
    cin >> a >> b;

    cout << square(a,b);

    // Please write your code here.

    return 0;
}