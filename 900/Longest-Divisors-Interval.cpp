/* https://codeforces.com/problemset/problem/1855/B */

#include <bits/stdc++.h>
using namespace std;

long long maxIntervalSize(long long n) {
    long long x = 1;
    while (n % x == 0) {
        x++;
    }
    return x - 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << maxIntervalSize(n) << endl;
    }
    return 0;
}
