
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

#define M 1000000000

int solve(int n) {
	if(n == 1) return 0;
	pair<int, int> p = {1, 1};
	queue<pair<int, int>> q;
	q.push(p);
	int ans = 0;
	// unordered_map<int, unordered_set<int>> visited;
	visited[1].insert(1);

	while(!q.empty()) {
		int x = q.size();
		ans++;
		for(int i = 0; i < x; ++i) {
			p = q.front();q.pop();
			if(p.first + 1 >= n || p.first + p.second >= n) return ans;
			// if(visited.count(p.first + 1) == 0 || visited[p.first+1].find(p.second+1) == visited[p.first+1].end()) {
				q.push({p.first + 1, p.second + 1});
			// 	visited[p.first + 1].insert(p.second + 1);
			// }
			// if(visited.count(p.first + p.second) == 0 || visited[p.first + p.second].find(p.second) == visited[p.first + p.second].end()) {
				q.push({p.first + p.second, p.second});
			// 	visited[p.first + p.second].insert(p.second);
			// }
		}
	}
	return ans;

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

	int t, n, m;
	cin >> t;

	while (t--) {
		cin >> n;

		int ans = solve(n);
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