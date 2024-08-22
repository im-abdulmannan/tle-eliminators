/* https://codeforces.com/problemset/problem/1726/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int ans = -1000000007;
        for(int i = 0; i < n; i++) {
            ans = max(ans, a[(i - 1 + n) % n] - a[i]);
        }

        for(int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[0]);
        }

        for(int i = 0; i < n; i++) {
            ans = max(ans, a[n - 1] - a[i]);
        }

        cout << ans << '\n';
    }
    return 0;
}
