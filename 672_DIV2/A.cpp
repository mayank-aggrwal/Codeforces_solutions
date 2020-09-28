
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, num;
	cin >> t;

	for(int i = 0; i < t; ++i) {
		int n, y = INT_MAX;
        cin >> n;
        string ans = "NO";
        vector<int> v(n);
        for(int j = 0; j < n; ++j) {
            cin >> v[j];
        }
        
        for(int j = 0; j < n; ++j) {
            int num = v[j];
            if(num >= y) {
                ans = "YES";
                break;
            }
            y = num;
        }
        cout << ans << endl;
	}

}