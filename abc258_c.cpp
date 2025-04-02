#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    int Q;
    string S;
    cin >> N >> Q >> S;
    int shift = 0;
    while (Q--) {
        int task, times;
        cin >> task >> times;
        if (task == 1) {
            shift = (shift + times) % N;
        } else {
            int pos = (times - 1 - shift + N) % N;
            cout << S[pos] << '\n';
        }
    }
} 