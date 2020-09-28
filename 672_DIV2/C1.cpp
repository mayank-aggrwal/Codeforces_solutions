
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli maxStrength(vector<lli> &v, int n, int i, int p, vector<vector<lli>> &dp) {
    if(i == n) return 0;

    if(dp[i][p] != -1) {
        return dp[i][p];
    }

    lli x = maxStrength(v, n, i + 1, p, dp);
    lli y = maxStrength(v, n, i + 1, 1 - p, dp);
    if(p == 1) {
        y += v[i];
    }
    else {
        y -= v[i];
    }
    dp[i][p] = max(x, y);
    return max(x, y);

}

lli solve(int n, vector<lli> &v) {
    vector<vector<lli>> dp(n, vector<lli>(2, -1));
    return maxStrength(v, n, 0, 1, dp);

}

int main() {

    int t, num;
    cin >> t;

    for(int i = 0; i < t; ++i) {
        int n, q;
        cin >> n >> q;

        vector<lli> v(n);
        for(int j = 0; j < n; ++j) {
            cin >> v[j];
        }

        lli ans = solve(n, v);
        
        cout << ans << endl;
    }

}