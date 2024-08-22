/* https://codeforces.com/problemset/problem/1679/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        if(n % 2 != 0 || n < 4) {
            cout << -1 << "\n";
            continue;
        }

        long long max_buses = n / 4, min_buses;
        if(n % 6 == 0) min_buses = n / 6;
        else min_buses = (n / 6) + 1;

        cout << min_buses << " " << max_buses << "\n";
    }

    return 0;
}
