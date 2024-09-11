/* https://codeforces.com/problemset/problem/1859/B */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"
const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    int minn = MOD;
    vector<int> m;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        vector<int> v(a);
        for(int j = 0; j < a; j++) cin >> v[j];

        int minEl = *min_element(v.begin(), v.end());
        minn = min(minn, minEl);
        v.erase(find(v.begin(), v.end(), minEl));
        m.push_back(*min_element(v.begin(), v.end()));
    }

    cout << minn + (ll) accumulate(m.begin(), m.end(), 0ll) - *min_element(m.begin(), m.end()) << nl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}