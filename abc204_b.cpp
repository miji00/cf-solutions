#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int summary = 0;
    while (n--) {
        int xd;
        cin >> xd;
        if (xd > 10) {
            summary += (xd - 10);
        }
    }
    cout << summary;
}