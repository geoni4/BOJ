#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define MAX(A, B) (A)>=(B) ? (A) : (B)
using namespace std;

int main() {
	int max_num, max_weight, weight, value;
	int dp[2][100001];
	cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
	freopen("12865.txt", "r", stdin);
	cin >> max_num >> max_weight;
	for (int i = 0; i <= max_weight; i++)	dp[0][i] = 0;
	for (int n = 1; n <= max_num; n++) {
		cin >> weight >> value;
		for (int i = 0; i <= max_weight; i++) {
			if (i < weight) dp[n%2][i] = dp[(n - 1)%2][i];
			else dp[n%2][i] = MAX(dp[(n - 1)%2][i], dp[(n - 1)%2][i - weight] + value);
		}
	}
	cout << dp[max_num%2][max_weight];
	return 0;
}