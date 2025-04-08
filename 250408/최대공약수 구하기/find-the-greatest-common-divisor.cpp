#include <iostream>

using namespace std;
int n,m;
void GCD(int n,int m){
    int max;
    for (int i=1; i <= n && i <= m; i++ ){
        if (n % i ==0 && m % i == 0)
            max = i;
    }
    cout << max << endl;
}    

int main() {
    cin >> n >> m;

    // Please write your code here.
    GCD(n,m);
    return 0;
}