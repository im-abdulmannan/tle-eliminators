/* https://codeforces.com/problemset/problem/1312/B */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.rbegin(), a.rend());
    
    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) { solve(); }
    return 0;
}
