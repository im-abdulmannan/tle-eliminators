/* https://codeforces.com/problemset/problem/1691/B */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> res(n), s(n);
        for(int i = 0; i < n; i++) cin >> s[i];

        for(int i = 0; i < n; i++) res[i] = i+1;

        bool flag = true;
        int l = 0, r = 0;
        while(r < n) {
            while(r < n - 1 && s[r] == s[r + 1]) r++;
            if(l == r) flag = false;
            else rotate(res.begin() + l, res.begin() + r, res.begin() + r + 1);
            l = r + 1;
            r++;
        }

        if(flag) {
            for(int i : res) {
                cout << i << " ";
            }
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}