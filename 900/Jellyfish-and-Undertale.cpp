/* https://codeforces.com/problemset/problem/1875/A */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        long long ans = b;

        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            ans += min(a - 1, x);
        }

        cout << ans << "\n";
    }

    return 0;
}