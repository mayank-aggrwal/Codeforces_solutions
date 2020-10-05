
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

#define M 1000000000

lli solve(int a, int b, int c) {
	
	if(a == b) {
		return c;
	}
	else if(b == c) {
		return a;
	}
	else if(a == c) {
		return b;
	}
	else {
		vector<lli> vec = {a, b, c};
		sort(vec.begin(), vec.end());
		double x = vec[2];
		double y = vec[0];
		double z = vec[1];

		double d = sqrt((x - y) * (x - y) + z * z); 
		// cout << d << endl;
		lli ans = (int)(d + 0.5);
		return ans;
	}

}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	//  CODEFORCES   ////////////////////////////

	int t, a, b, c;
	cin >> t;

	while (t--) {
		cin >> a >> b >> c;

		lli ans = solve(a, b, c);
		cout << ans << endl;
	}

	/////////////////////////////


	//  KICKSTART   ////////////////////////////

	// int t;
	// cin >> t;

	// for (int z = 1; z <= t; ++z) {

	// 	string s;
	// 	cin >> s;

	// 	pair<lli, lli> ans = {0, 0};
	// 	ans = findFinalPos(s);
	// 	cout << "Case #" << z << ": " << (((ans.first % M) + M) % M) + 1 << " , " << (((ans.second % M) + M) % M) + 1 << endl;

	// }
	/////////////////////////////
	return 0;
}