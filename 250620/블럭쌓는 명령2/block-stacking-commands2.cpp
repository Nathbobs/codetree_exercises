#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];
int slots[101] = {0};

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
        for (int j = A[i]; j <= B[i]; j++) {
            slots[j]++;
        }
    }

    int max_blocks = 0;
    for (int i = 1; i <= N; i++) {
        if (slots[i] > max_blocks) max_blocks = slots[i];
    }

    cout << max_blocks;
    return 0;
}
