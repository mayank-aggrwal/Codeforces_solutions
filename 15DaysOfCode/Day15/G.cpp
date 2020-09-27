
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
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


	string a, b;
	cin >> a >> b;

	unordered_map<string, int> um;
	um["8<#8<"] = 0;
	um["8<#[]"] = 1;
	um["8<#()"] = -1;
	um["()#8<"] = 1;
	um["()#()"] = 0;
	um["()#[]"] = -1;
	um["[]#8<"] = -1;
	um["[]#()"] = 1;
	um["[]#[]"] = 0;
	int w = 0, k = 0;

	for (int i = 0; i < a.size(); i += 2) {
		string x;
		x += a[i];
		x += a[i + 1];
		x += "#";
		x += b[i];
		x += b[i + 1];
		// cerr << x << " ";
		int sc = um[x];
		// cerr << sc << endl;
		if (sc == 1) {
			w++;
		}
		else if (sc == -1)
			k++;
	}



	if (w == k) {
		cout << "Tie" << endl;
	}
	else if (w > k)
		cout << "Wakanda" << endl;
	else
		cout << "Kree" << endl;

	return 0;
}
