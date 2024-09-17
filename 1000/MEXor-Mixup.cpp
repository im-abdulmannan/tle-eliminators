/* https://codeforces.com/problemset/problem/1567/B */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int pXor;
    if (a % 4 == 1) pXor = a - 1;
    else if (a % 4 == 2) pXor = 1;
    else if (a % 4 == 3) pXor = a;
    else pXor = 0;

    if (pXor == b) cout << a << '\n';
    else if ((pXor ^ b) != a) cout << a + 1 << '\n';
    else cout << a + 2 << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
