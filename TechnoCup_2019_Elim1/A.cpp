
#include <bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	/////////////////////////////
	
	int n, x;
	cin >> n;
	bool f = 1;
	for(int i = 0; i < n; ++i) {
		cin >> x;
		if(x == 1) {
			f = 0;
		}
	}
	if(f)
		cout << "EASY" << endl;
	else
		cout << "HARD" << endl;

	/////////////////////////////

	return 0;
}