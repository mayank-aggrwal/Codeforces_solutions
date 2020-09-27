
#include <bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	/////////////////////////////
	
	int a;
	cin >> a;

	int i = 2;
	for(; i <= a / 2; ++i) {
		if(a % i == 0) {
			break;
		}
	}

	cout << i << a / i << endl;


	/////////////////////////////

	return 0;
}