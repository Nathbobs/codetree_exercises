#include <iostream>

// using namespace std;
//  bool IsPrimeSum (int a, int b){
//     int count = 0;
//     for (int i = a; i <= b; i++)
//         if (a % i == 0) || (b % i == 0)
//             return false;
//         count += i;
//     cout << count;
//     return true;
//  }



// int main() {

//     int a, b;
//     cin >> a >> b;

//     if (IsPrimeSum(a,b))
//             cout << IsPrimeSum;


//     // Please write your code here.

//     return 0;
// }

#include <iostream>

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++){
        if (n%i == 0)
            return false;
    }
    return true;
}
int primeSum(int a, int b){
    int sum = 0;
    for (int i = a; i <= b; i++){
        if (isPrime(i))
            sum += i;
    } 
    return sum;

        
}
using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    cout << primeSum(a,b);

    // Please write your code here.

    return 0;
}