/* https://codeforces.com/problemset/problem/1794/B */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) if(a[i] == 1) a[i]++;

        for(int i = 1; i < n; i++) if(a[i] % a[i-1]==0) a[i]++;

        for(auto i : a) cout << i << " ";
        cout << "\n";
    }

    return 0;
}