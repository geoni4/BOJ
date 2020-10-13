#include <iostream>
using namespace std;

int N, res, dp[200000][3];
int main() {
	
	cin >> N;
	dp[0][0] = 3, dp[0][1] = 1, dp[0][2] = 0;
	if (N == 1) res = 3;
	else {
		for (int i = 1; i < N; i++) {
			dp[i][1] = (dp[i - 1][1] + dp[i - 1][2] * 2) % 9901;
			dp[i][2] = (dp[i - 1][1] + dp[i - 1][2]) % 9901;
			dp[i][0] = (3 * dp[i][1] + 4 * dp[i][2]) % 9901;
			res = dp[i][0];
		}
	}
	cout << res;
	return 0;
}