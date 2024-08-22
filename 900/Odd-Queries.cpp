/* https://codeforces.com/problemset/problem/1807/D */

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;

    long long a[200005], sum=0, pref[200005];
    long long n, q;

    while(t--) {
        cin >> n >> q;
        sum = 0;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            sum += a[i];
            pref[i] = pref[i - 1];
            pref[i] += a[i];
        }

        for(int i = 0; i < q; i++) {
            long long l, r, k;
            cin >> l >> r >> k;
            long long ans = pref[n]-(pref[r]-pref[l-1])+k*(r-l+1);
            if(ans % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        };
    }

    return 0;
}
