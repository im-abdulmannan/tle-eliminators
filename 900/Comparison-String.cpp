/* https://codeforces.com/problemset/problem/1837/B */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 1, idx = 1;
        for(int i = 1; i < n; i++) {
            if(s[i] != s[i - 1]) idx = 1;
            else idx++;

            ans = max(ans, idx);
        }

        cout << ans + 1 << '\n';
    }

    return 0;
}