
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
    
    int n, x;
    cin >> n;
    vector<int> ans(n, 0);
    for(int i = 1; i <= n; ++i) {
        cin >> x;
        ans[x - 1] = i;
    }
    for(int &num : ans)
        cout << num << " ";
    cout << endl;
    
    return 0;
}