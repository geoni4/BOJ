#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int N, K, sum =0, tmp[100000], max_sum=-10000000;
	cin.tie(NULL), ios::sync_with_stdio(false);
	freopen("2559.txt", "r", stdin);
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> tmp[i];
		sum += tmp[i];
		if (i >= K) {
			sum -= tmp[i - K];
			if (max_sum <= sum) max_sum = sum;
		}
		else if (i == K - 1) {
			if (max_sum <= sum) max_sum = sum;
		}
	}
	cout << max_sum;
	return 0;
}