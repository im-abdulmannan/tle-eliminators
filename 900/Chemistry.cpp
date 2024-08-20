/* https://codeforces.com/problemset/problem/1883/B */

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<char> &str, int k)
{
    int arr[26] = {};
    for (char c : str)
    {
        arr[c - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if (arr[i] % 2!= 0 && k >= 0) {
            k--;
        } else if (arr[i] % 2 != 0 && k < 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<char> str(n);
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }

        if (isPalindrome(str, k))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}