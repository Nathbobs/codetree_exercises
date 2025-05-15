#include <iostream>

using namespace std;

int sum_div (int a){
    int sum = 0;
    for (int i = 1; i <= a; i++){ // changed i=0 to i=1 and also i<a to i <=a
        sum += i;
        
    } 
    return sum/10; //moved this from inside the loop to outside the loop
}

int N;

int main() {
    cin >> N;

    int total = sum_div(N);
    cout << total;

    // Please write your code here.

    return 0;
}