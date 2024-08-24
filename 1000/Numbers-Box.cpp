/* https://codeforces.com/problemset/problem/1447/B */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, m; cin >> n >> m;

        int sum = 0, total_minus = 0, mini = 101;
        vector<vector<int>> grid(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> grid[i][j];

                sum += abs(grid[i][j]);
                mini = min(mini, abs(grid[i][j]));
                if(grid[i][j] < 0) total_minus++;
            }
        }

        if(mini == 0) cout << sum << endl;
        else if(total_minus % 2 == 1) cout << sum - (2*mini) << endl;
        else cout << sum << endl;
    }

    return 0;
}