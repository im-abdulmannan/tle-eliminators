/* https://codeforces.com/problemset/problem/1474/B */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        ll d; cin >> d;
        vector<ll> v;
        for(ll i = d + 1; ; i++) {
            ll t = 1;
            for(ll j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    t = 0;
                    break;
                }
            }

            if(t) { v.push_back(i); break; }
        }

        for(ll i = v.back() + d; ; i++) {
            ll t = 1;
            for(ll j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    t = 0;
                    break;
                }
            }
            if(t) { v.push_back(i); break; }
        }

        cout << min(v[0] * v[1], v[0] * v[0] * v[0]) << "\n";
    }

    return 0;
}
