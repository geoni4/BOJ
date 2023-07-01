#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int start, max_cnt = 0, max_v = 0, prev, pos, cnt;
	cin.tie(NULL), ios::sync_with_stdio(false);
	freopen("2635.txt", "r", stdin);
	cin >> start;
	for (int i = start; i >start/2; i--) {
		cnt = 2;
		int tmp = i;
		prev = start, pos = tmp;
		while (1) {
			tmp = prev - pos, prev = pos, pos = tmp;
			cnt++;
			if (pos < 0) break;
			if (max_cnt < cnt) {
				max_cnt = cnt;
				max_v = i;
			}
		}
	}
	cout << max_cnt << '\n';
	int tmp = max_v;
	prev = start, pos = tmp;
	cout << start << " ";
	while (pos >= 0) {
		tmp = prev - pos, prev = pos, pos = tmp;
		cout << prev << " ";
	}
	return 0;
}