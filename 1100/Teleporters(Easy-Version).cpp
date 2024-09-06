/* https://codeforces.com/problemset/problem/1791/G1 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, c; cin >> n >> c;
        
        priority_queue<int> pq;
        for(int i = 1, x; i <= n; i++) {
            cin >> x;
            pq.push(-x - i);
        }

        int ans = 0;

        while(!pq.empty()) {
            int x = -pq.top(); pq.pop();
            if(x > c) break;
            ans++;
            c-=x;
        }

        cout << ans << '\n';
    }
    
    return 0;
}
