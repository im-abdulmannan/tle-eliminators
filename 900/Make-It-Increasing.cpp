#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;
        bool isPossible = true;
        for (int i = n - 2; i >= 0; i--)
        {
            while(a[i] >= a[i+1] && a[i] > 0) {
                a[i] /= 2;
                ans++;
            }
            if(a[i] == a[i+1]) {
                isPossible = false;
                break;
            }
        }

        if(!isPossible) cout << -1 << "\n";
        else cout << ans << "\n";
    }

    return 0;
}