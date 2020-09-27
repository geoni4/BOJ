#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

void findNumber(int N) {
	int cnt = 0, tmp, eq, prev, loop_cnt = 0, eq_cnt = 0;
	for (int i = 1; i <= N; i++) {
		loop_cnt = 0, eq_cnt = 0;
		tmp = i;
		eq = (tmp / 10) % 10 - tmp % 10;
		prev = eq;
		while (1) {
			if (eq == prev)	eq_cnt++;
			loop_cnt++;
			prev = eq;
			tmp /= 10;
			if (tmp / 10 == 0) break;
			eq = (tmp / 10) % 10 - tmp % 10;
		}
		if (eq_cnt == loop_cnt) cnt++;

	}
	cout << cnt;
}


int main() {
	int N;
	cin.tie(0), ios::sync_with_stdio(0);
	freopen("1065.txt", "r", stdin);
	cin >> N;
	findNumber(N);

	return 0;
}