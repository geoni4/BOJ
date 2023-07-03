#include <iostream>

using namespace std;
typedef long long ll;
ll dp[100];

void fibo(int n) {
	if (n == 0) {
		dp[n] = 0;
		return;
	}
	else if (n == 1) {
		dp[n] = 1;
		return;
	}
	else {
		if (!dp[n]) fibo(n - 1);
		dp[n] = dp[n - 1] + dp[n - 2];
	}
}

int main() {
	ll n;
	cin >> n;
	fibo(n);
	cout << dp[n];
	return 0;
}