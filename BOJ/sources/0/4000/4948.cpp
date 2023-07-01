#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	freopen("4948.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	int N, M, comp_num;
	bool num[300001] = { 0, };
	num[0] = num[1] = 1;
	for (int i = 2; i <= 150000; i++) {
		for (int j = 2; j <= 150000; j++) {
			comp_num = i * j;
			if (comp_num > 300000) break;
			if (num[comp_num]) continue;
			num[comp_num] = 1;
		}
	}
	while (1) {
		cin >> N;
		if (!N) break;
		int cnt = 0;
		for (int i = N+1; i <= 2 * N; i++) {
			if (!num[i]) cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}