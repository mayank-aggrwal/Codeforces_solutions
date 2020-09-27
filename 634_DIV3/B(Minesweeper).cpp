
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> d = {{ -1, 0}, { -1, -1}, { -1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};

bool isVal(int n, int m, int i, int j) {
	if (i >= 0 && j >= 0 && i < n && j < m)
		return true;
	return false;
}

int getBombs(vector<vector<char>> mat, int n, int m, int i, int j) {
	int bombs = 0;
	for (int k = 0; k < 8; ++k) {
		int x = i + d[k].first, y = j + d[k].second;
		if (isVal(n, m, x, y) && mat[x][y] == '*')
			bombs++;
	}
	return bombs;
}

bool isValid(vector<vector<char>> mat, int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (mat[i][j] != '*') {

				int x = getBombs(mat, n, m, i, j);
				if (mat[i][j] == '.') {
					if (x != 0)
						return false;
				}
				else {
					if (x != (int)(mat[i][j] - 48))
						return false;
				}

			}
		}
	}
	return true;
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

	int n, m;
	cin >> n >> m;
	vector<vector<char>> mat(n, vector<char>(m, 0));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> mat[i][j];
		}
	}

	if (isValid(mat, n, m)) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;

	return 0;
}