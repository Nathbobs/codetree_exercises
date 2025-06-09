#include <iostream>

using namespace std;

// int power (int a, int b){
//     while( 1 <= a && b <= 10){
//         for (int i = 0; i < b; i++){
//             a *= a * b[i];

//             return a;
//         }
//     }
// }

int power (int a, int b){
    int result = 1;
    for (int i = 0; i < b; i++){
        result *= a;
    }
    return result;
}



int a, b;
int main() {
    cin >> a >> b;

    if ( a >= 1 && b <=10){
        cout << power(a,b);
    }

    // Please write your code here.

    return 0;
}