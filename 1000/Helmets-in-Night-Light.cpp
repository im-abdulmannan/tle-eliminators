/* https://codeforces.com/problemset/problem/1567/B */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, p; cin >> n >> p;
    vector<pair<int, int>> a(n, {0, 0});
    for(int i = 0; i < n; i++) cin >> a[i].first;
    for(int i = 0; i < n; i++) cin >> a[i].second;

    sort(a.begin(), a.end(), [](const pair<int, int>& x, const pair<int, int>& y) {
        return x.second < y.second;
    });

    if(p < a[0].second) {cout << p * n << "\n"; return;}
    int sum = 0;
    int i = 0, j = n - 1;
    while(i < j) {
        if(a[i].second <= p) {
            while(i < j && a[i].first) {
                sum += a[i].second;
                j--;
                a[i].first--;
            }
        } else {
            while(i < j) {
                sum += p;
                i++;
            }
        }
    }

    cout << sum << "\n";

    // for(int i = 0; i < n; i++) {
    //     cout << a[i].first << " " << a[i].second << endl;
    // }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // solve();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
