#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> perm;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        perm.insert(a);
    }
    if (perm.size() != n) {
        cout << "No";
    } else {
        cout << "Yes";
    }
}