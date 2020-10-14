#include <iostream>
using namespace std;


int main() {
	int N, res, dp[100001];
	cin >> N;
	dp[0] = 1, dp[1] = 3;
	res = dp[1];
	for (int i = 2; i <= N; i++) {
		dp[i] = (2 * dp[i-1] + dp[i-2]) % 9901;
		res = dp[i];
	}
	cout << res;
	return 0;
}