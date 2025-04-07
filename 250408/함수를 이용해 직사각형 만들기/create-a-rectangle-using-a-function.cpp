#include <iostream>

using namespace std;

int n, m;

void print1s( int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << "1";
        cout << endl;
    } 
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    print1s(n,m);

    return 0;
}