
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;


lli solve(int n, vector<int> &v) {
    vector<lli> count(32);
    lli z = 0;
    for(int i = 0; i < n; ++i) {
        int x = v[i], idx = -1;
        if(x == 0) {
            z++;
            continue;
        }
        while(x > 0) {
            idx++;
            x >>= 1;
        }
        count[idx]++;
    }
    lli cnt = 0;

    for(int i = 0; i < 32; ++i) {
        if(count[i] > 1) {
            cnt += (count[i] * (count[i] - 1)) / 2;
        }
    }

    return (z * (z - 1)) / 2 + cnt;
}

// int bruteforce(int n, vector<int> &v) {
//     int ans = 0;
//     for(int i = 0; i < n; ++i) {
//         for(int j = i + 1; j < n; ++j) {
//             if((v[i] & v[j]) >= (v[i] ^ v[j])) ans++;
//         }
//     }
//     return ans;
// }

int main() {

    int t;
    cin >> t;

    for(int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int j = 0; j < n; ++j) {
            cin >> v[j];
        }

        lli ans = solve(n, v);
        
        cout << ans << endl;
    }

}