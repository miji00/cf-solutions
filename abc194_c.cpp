#include <bits/stdc++.h>

using namespace std;

/*
int main() {
    int n;
    int result = 0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 2; i < n; i++) {
        for (int j = 1; j <= i - 1; j++) {
            result += ((nums[i] - nums[j]) * (nums[i] - nums[j])); 
        }
    }
    cout << result;
}
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> nums(401, 0);
    int offset = 200;

    for (int i = 0;i < n; i++) {
        int x;
        cin >> x;
        nums[offset + x]++;
    }

    long long ans = 0;
    for (int i = 0; i < 401; i++) {
        for (int j = i + 1; j < 401; j++) {
            if (nums[i] > 0 && nums[j] > 0) {
                cout << nums[i] << " " << nums[j] << " " << i << " " << j << endl;
            }
            int diff = j - i;
            ans += (long long)(nums[i] * nums[j]) * diff * diff;
        }
    }
    cout << ans;
}