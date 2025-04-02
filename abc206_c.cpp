/**
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] != nums[j]) {
                count += 1;
            }
        } 
    }
    cout << count;
}
**/

#include <bits/stdc++.h>

using namespace std;

int main () {
    long long n;
    cin >> n;
    vector<int> a(n);
    for (auto &nx : a){cin >> nx;}
    long long res1=(n*(n-1)/2), res2=0;

    map<int, long long>mp;
    for(int i=0;i<n;i++){mp[a[i]]++;}
    for(int i=0;i<n;i++){res2+=(n-mp[a[i]]);}
    res2/=2;

    sort(a.begin(), a.end());
    a.push_back(-1);
    long long cnt=1;
    for(int i=0;i<n;i++) {
        if(a[i]!=a[i+1]) {
            res1 -=((cnt*(cnt-1))/2);
            cnt=1;
        }
        else{cnt++;}
    }
    assert(res1==res2);
    cout << res1 << '\n';
}



/**
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    map<int, int> occurences;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        occurences[nums[i]]++;
    }
    int res = (n * (n-1)) / 2;
    for (auto i : occurences) {
        int many = i.second;
        if (many == 1) {
            break;
        }
        res -= (many * (many - 1) / 2);
    }
    cout << res;
}

**/