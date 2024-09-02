/* https://codeforces.com/problemset/problem/1411/B */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isFair(ll x) {
    ll temp = x;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && x % digit != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}

ll findFairNumber(ll n) {
    while(!isFair(n)) {
        n++;
    }
    return n;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        cout << findFairNumber(n) << endl;
    }

    return 0;
}
