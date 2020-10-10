#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int main() {
	freopen("9020.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	int N, l, r, comp_num;
	bool num[10001] = { 0, };
	num[0] = num[1] = 1;
	for (int i = 2; i <= 5000; i++) {
		for (int j = 2; j <= 5000; j++) {
			comp_num = i * j;
			if (comp_num > 10000) break;
			if (num[comp_num]) continue;
			num[comp_num] = 1;
		}
	}
	int tc;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		cin >> N;
		l = r = N / 2;
		while (1) {
			if (!num[l] && !num[r]) {
				cout << l << " " << r << '\n';
				break;
			}
			else l--, r++;
		}
	}
	return 0;
}