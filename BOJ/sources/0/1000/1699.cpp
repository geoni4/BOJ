#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define MIN(A, B) (A) <= (B) ? (A) : (B)
#define INF 987654321

using namespace std;

int dp[100001];

int main() {
	int N;
	//freopen("1699.txt", "r", stdin);
	dp[0] = 0;
	cin.tie(0), ios::sync_with_stdio(0);
	cin >> N;
	for (int i = 1; i <= N; i++) dp[i] = INF;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j*j <= i; j++)
			dp[i] = MIN(dp[i], dp[i - j * j]+1);
	cout << dp[N] << endl;
	return 0;
}