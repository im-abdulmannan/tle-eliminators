/* https://codeforces.com/problemset/problem/1725/B */

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, p; cin >> n >> p;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int l = 0, r = n - 1, cnt = 0;
    while(l <= r) {
        int sum = a[r];
        while(l < r && sum <= p) {
            l++;
            sum += a[r];
        }
        if(sum > p) cnt++;
        r--;
    }

    cout << cnt << "\n";
    
    return 0;
}
