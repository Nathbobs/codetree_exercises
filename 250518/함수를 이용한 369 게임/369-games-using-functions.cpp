// #include <iostream>

// using namespace std;

// bool tens_digit (int n){
//     return (n /10) == 3 || (n/10) == 6 || (n / 10) == 9;
// }

// bool units_digit(int n){
//     return (n % 10) == 3 || (n % 10) == 6 || (n % 10) == 9;
// }

// bool IsMagicNumber(int n){
//     return n % 3 == 0 || tens_digit(n) || units_digit(n);
// }

// int a, b;

// int main() {
//     cin >> a >> b;
//     int count = 0;
//     for (int i = a; i <= b; i++){
//         if (IsMagicNumber(i))
//             count++;
          
//     }
//     cout << count;

//     // Please write your code here.

//     return 0;
// }

//CORRECTED
#include <iostream>
using namespace std;

bool contains369(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit == 3 || digit == 6 || digit == 9)
            return true;
        n /= 10;
    }
    return false;
}

bool IsMagicNumber(int n) {
    return n % 3 == 0 || contains369(n);
}

int main() {
    int a, b;
    cin >> a >> b;

    int count = 0;
    for (int i = a; i <= b; i++) {
        if (IsMagicNumber(i))
            count++;
    }

    cout << count;
    return 0;
}