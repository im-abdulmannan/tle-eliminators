/* https://codeforces.com/problemset/problem/1704/B */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        int min_num = a[0];
        int max_num = a[0];

        int cnt = 0;
        for (int i = 1; i < n; i++) {
            if(a[i] > max_num) max_num = a[i];
            if(a[i] < min_num) min_num = a[i];
            if(max_num - min_num > 2*x) cnt++, max_num = min_num = a[i];
        }

        cout << cnt << '\n';
    }

    return 0;
}