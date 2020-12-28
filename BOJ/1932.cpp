#include <iostream>
using namespace std;

#define MAX(A, B) (A) > (B) ? (A) : (B)
int dp[500][500];
int n, max_v=0;
int main() {
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> dp[i][j];
			if (i == 0) {
				max_v = dp[i][j];
				continue;
			}
			if (j == 0)				dp[i][j] += dp[i - 1][j];
			if (j == i)				dp[i][j] += dp[i - 1][j - 1];
			if (j != 0 && j != i)	dp[i][j] += MAX(dp[i - 1][j], dp[i - 1][j - 1]);
			if (i == n - 1) 		max_v = MAX(max_v, dp[i][j]);
		}
	}
	cout << max_v;
	return 0;
}