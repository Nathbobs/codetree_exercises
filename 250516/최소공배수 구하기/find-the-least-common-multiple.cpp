// #include <iostream>

// using namespace std;

// int n, m;

// int main() {
//     cin >> n >> m;
//     int LCM = 0;
//     for (int i = 0; i < n; i++) && (i = 0; i < m; i++){
//         LCM = i%n && i%m;
//         LCM += i;
//     }

//     // Please write your code here.

//     return 0;
// } Mine

#include <iostream>

using namespace std;
int lcm (int a, int b){
    int maxval = (a > b) ? a:b; //used instead of a loop statement. means (condition a > b "?" check if it is true then max val is a else max val is b)
  //same as;
//   int maxval;
//   if (a > b) {
//     maxval = a;
//   } else {
//     maxval = b;
//   }
    while (true){
        if (maxval % a == 0 && maxval % b == 0){
            return maxval;
        } maxval++;
    }

}

int n, m;

int main() {
    cin >> n >> m;
    cout << lcm(n,m) << endl;
    // Please write your code here.
    return 0;
} //Correction