/* https://codeforces.com/problemset/problem/1438/B */

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve() {
        int n; cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; ++i) cin >> b[i];

        set<int> unique_elements(b.begin(), b.end());
        if (unique_elements.size() < n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) { solve(); }
    return 0;
}
