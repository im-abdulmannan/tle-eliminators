/* https://codeforces.com/problemset/problem/1873/E */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        ll n, x; cin >> n >> x;
        ll a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        ll low = 0, high = 2000000007;
        while(low < high) {
            ll mid = low + (high - low + 1) / 2;
            ll tot = 0;
            for(int i = 0; i < n; i++) {
                tot += max(mid - a[i], 0LL);
            }
            if(tot <= x) low = mid;
            else high = mid - 1;
        }
        cout << low << endl;
    }

    return 0;
}
