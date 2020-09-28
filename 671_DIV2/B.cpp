
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	vector<int> arr(n);

	for(int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int ans = (n - 1) / 2;

	sort(arr.begin(), arr.end());

	for(int i = 0; i < n - 1; i += 2) {
		swap(arr[i], arr[i + 1]);
	}

	cout << ans << endl;
	for(int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

}