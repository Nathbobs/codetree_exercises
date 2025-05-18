// #include <iostream>

// using namespace std;

// bool even_sum (int number){
//     return number %2 == 0 && number %5 == 0;
// }

// int n;

// int main() {
//     int count = 0;
//     for (int i =1; i <= n; i++){
//         if (even_sum(i)){
//             cout << "Yes";
//             } else{
//                 cout << "no";
//             }
//             count++;

//     }
//     cin >> n;
//     cout << even_sum;

//     // Please write your code here.

//     return 0;
// } // Mine Solution which is wrong

// CORRECTED SOLUTION:

#include <iostream>
using namespace std;
bool even_sum(int number){
    int digit_sum = (number / 10) + (number % 10);
    return number % 2 == 0 && digit_sum % 5 == 0;
}

int main (){
    int n;
    cin >> n;
    if (even_sum(n)){
        cout << "Yes";
    } else {
        cout << "No";
    }
}
