/* https://codeforces.com/problemset/problem/1904/A */

#include<bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int x1, x2, y1, y2; cin >> x1 >> x2 >> y1 >> y2;
        set<pair<int, int>> st1, st2;

        for(int i = 0; i < 4; i++) {
            st1.insert({x1 + dx[i] * a, x2 + dy[i] * b});
            st2.insert({y1 + dx[i] * a, y2 + dy[i] * b});
            st1.insert({x1 + dx[i] * b, x2 + dy[i] * a});
            st2.insert({y1 + dx[i] * b, y2 + dy[i] * a});
        }
        int res = 0;
        for(auto x : st1) {
            if(st2.count(x)) res++;
        }

        cout << res << '\n';
    }

    return 0;
}
