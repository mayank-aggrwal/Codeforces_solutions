
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		int n, ans = 0;
		cin >> n;
		string s;
		cin >> s;

		if(n & 1) {
			ans = 2;
			for(int i = 0; i < n; i += 2) {
				if((int)(s[i] - '0') & 1) {
					ans = 1;
					break;
				}
			}
		}
		else {
			ans = 1;
			for(int i = 1; i < n; i += 2) {
				if((int)(s[i] - '0') % 2 == 0) {
					ans = 2;
					break;
				}
			}
		}

		cout << ans << endl;

	}

}
