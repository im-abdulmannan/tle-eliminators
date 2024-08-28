/* https://codeforces.com/problemset/problem/1883/C */

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ans = false;
        int mini = 4;
        if(k == 2 || k == 3 || k == 5) {
            for(int i : a) {
                if(i % k == 0) {
                    mini = min(mini, 0);
                    ans = true;
                    break;
                }
                mini = min(mini, k - i % k);
            }
            cout << mini << '\n';
        }

        if (k == 4) {
            int count2 = 0;
            for(int i : a) {
                if(i % 4 == 0) {
                    mini = min(mini, 0);
                    ans = true;
                    break;
                }
                if(k - i % k == 1) {
                    mini = min(mini, 1);
                }
                if(i % 2 == 0) count2++;
            }

            if(ans == false) {
                if(count2 >= 2) mini = min(0, mini);
                else if(count2 == 1) mini = min(1, mini);
                else if(count2 == 0) mini = min(2, mini);
            }

            cout << mini << '\n';
        }
    }

    return 0;
}
