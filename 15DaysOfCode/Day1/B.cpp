
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
    
    int n, m, ans = 0;
    cin >> n >> m;
    // cout << n << m << endl;
    vector<int> mm(m, 0);
    vector<vector<char>> marks(n, vector<char>(m));
    for(int i = 0; i < n; ++i) {
    	for(int j = 0; j < m; ++j) {
    		char g;
    		cin >> g;
    		marks[i][j] = g;
    		mm[j] = max(mm[j], g - '0');
    	}
    }
    // cout << 1 << endl;
    for(int i = 0; i < n; ++i) {
    	for(int j = 0; j < m; ++j) {
    		if(mm[j] == marks[i][j] - '0') {
    			ans++;
    			break;
    		}
    	}
    }
    cout << ans << endl;
    
    return 0;
}