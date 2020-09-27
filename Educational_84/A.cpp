
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
    
    int t, n, k;
    cin >> t;

    while(t--) {
    	cin >> n >> k;
    	int a = 1;
    	for(int i = 1; i < k; ++i) {
    		if(n < 0)
    			break;
    		n -= a;
    		a += 2;
    	}
    	if(n < 0 || (n & 1) == 0)
    		cout << "NO" << endl;
    	else 
    		cout << "YES" << endl;
    }
    
    return 0;
}