#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() {
	freopen("1978.txt", "r", stdin);
	int N, comp_num, cnt = 0, n;
	bool num[1001] = { 0, };
	num[0] = num[1] = 1;
	for (int i = 2; i <= 500; i++) {
		for (int j = 2; j <= 500; j++) {
			comp_num = i * j;
			if (comp_num > 1000) break;
			if (num[comp_num]) continue;
			num[comp_num] = 1;
		}
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		if (!num[n]) cnt++;
	}
	cout << cnt;
	return 0;
}