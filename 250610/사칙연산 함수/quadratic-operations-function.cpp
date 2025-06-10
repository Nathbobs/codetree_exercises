#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}

int a;
int c;
char o;

int main() {
    cin >> a >> o >> c;

    if (a < 1 || c < 1 || a > 100 || c > 100) {
        cout << "False";
        return 0;
    }

    int result;
    bool valid = true;

    switch (o) {
        case '+':
            result = add(a, c);
            break;
        case '-':
            result = subtract(a, c);
            break;
        case '*':
            result = multiply(a, c);
            break;
        case '/':
            result = divide(a, c);
            break;
        default:
            valid = false;
            break;
    }

    if (valid) {
        cout << a << " " << o << " " << c << " = " << result << endl;
    } else {
        cout << "False" << endl;
    }    

    // Please write your code here.

    return 0;
}