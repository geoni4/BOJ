#include <iostream>
#define DVS 10007
using namespace std;
int dp[1001][1001] = { 1, };

int pascal(int n, int r) {
	for (int i = 1; i <= n; i++) {
		dp[i][0] = dp[i][i] = 1;
		for (int j = 1; j < i; j++) {
			dp[i][j] = (dp[i - 1][j] % DVS + dp[i - 1][j - 1] % DVS ) % DVS;
		}
	}
	return dp[n][r];
}


int main() {
	long long n, r, ans = 1;
	cin >> n >> r;
	if (n / 2 < r) r = n - r;
	ans = pascal(n, r);
	cout << ans;
	return 0;
}