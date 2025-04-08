#include <iostream>

using namespace std;

int N;
int j = 1;
void printN(int N){
    for (int i=0; i < N; i++){
        cout << j << " ";
        j++;
        if (j > 9) j = 1;

    }        
    cout << endl;
}

int main() {
    cin >> N;
    // Please write your code here.
    for (int M=0; M < N; M++){
        printN(N);
    }
        
    return 0;
}