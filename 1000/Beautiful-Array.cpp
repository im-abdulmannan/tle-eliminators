/* https://codeforces.com/problemset/problem/1715/B */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin >> t;
    while (t--) {
        ll n, k, b, s; cin >> n >> k >> b >> s;
        vector<ll> a(n);
        a[0] = k * b;
        s -= a[0];
        if(s < 0) cout << "-1\n";
        else {
            for (ll i = 0; i < n; i++) {
                ll curr = min(s, k - 1);
                a[i] += curr;
                s -= curr;
            }
            if(s > 0) cout << "-1\n";
            else {
                for(auto& x : a) cout << x << " ";
                cout << "\n";
            }
        }
    }
    return 0;
}
