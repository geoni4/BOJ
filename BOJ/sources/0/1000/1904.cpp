#include <iostream>

using namespace std;
int dp[5];

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < 3; i++)	dp[i] = i;
	for (int i = 3; i <= n; i++) dp[i % 3] = (dp[(i - 1) % 3] + dp[(i - 2) % 3]) % 15746;

	cout << dp[n%3];
	
	return 0;
}