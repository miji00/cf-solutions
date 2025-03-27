#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = b / c;
    int y = x * c;
    if (y > a) {
        cout << y;
    } else {
        cout << -1;
    }
}