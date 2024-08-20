/* https://codeforces.com/problemset/problem/1869/A */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t-- ) {
        int n; cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        if(n & 1) {
            cout << "4" << endl;
            cout << "1 " << n - 1 << endl;
            cout << "1 " << n - 1 << endl;
            cout << n - 1 << ' ' << n << endl;
            cout << n - 1 << ' ' << n << endl;
        } else {
            cout << "2" << endl;
            cout << "1 " << n << endl;
            cout << "1 " << n << endl;
        }
    }

    return 0;
}