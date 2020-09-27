
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

int sumDigits(lli n) {
	int ans = 0;
	while (n) {
		ans += (n % 10);
		n /= 10;
	}
	return ans;
}

lli solve(lli n, int s) {

	int sum = sumDigits(n), carry = 0, i = 0;
	// lli ans = 0;
	if (sum <= s) return 0;
	string num;

	while (n > 0 && sum > s) {

		int d = n % 10;
		if (d == 0) {
			num += '0';
			n /= 10;
		}
		else {
			int r = 10 - d;
			num += (char)(r + '0');
			n /= 10;
			n++;
		}
		sum = sumDigits(n);
	}

	lli ans = 0;

	for (int i = num.size() - 1; i >= 0; --i) {
		ans = ans * 10 + (num[i] - '0');
	}
	return ans;
	// string num = to_string(n), ans;
	// reverse(num.begin(), num.end());

	// while(i < num.size() && sum > s) {
	// 	int digit = num[i] - '0';
	// 	if(digit + carry == 0 || digit + carry == 10) {
	// 		ans += '0';
	// 		carry = (digit + carry == 10);
	// 		continue;
	// 	}
	// 	ans += (char)((10 - (digit + carry)) + '0');
	// 	carry = 1;
	// 	i++;
	// }

	// reverse(num.begin(), num.end());
	// lli ans = stoi(num);
	// return ans;

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

	/////////////////////////////

	int t, s;
	lli n;
	cin >> t;

	while (t--) {
		cin >> n >> s;
		lli ans = solve(n, s);
		cout << ans << endl;
	}

	/////////////////////////////

	return 0;
}