/* https://codeforces.com/problemset/problem/1850/D */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        int cnt = 1, ans = 1;

        for(int i = 1; i < n; i++) {
            if(a[i] - a[i - 1] > k) cnt=1;
            else cnt++;

            ans = max(cnt, ans);
        }

        cout << n - ans << endl;
    }

    return 0;
}
