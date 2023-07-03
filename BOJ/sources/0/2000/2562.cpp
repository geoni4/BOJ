#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int tmp, max_v, idx;
	freopen("2562.txt", "r", stdin);
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	for (int i = 1; i <= 9; ++i) {
		cin >> tmp;
		if (i == 1) {
			max_v = tmp;
			idx = i;
		}
		else {
			if (max_v < tmp) {
				max_v = tmp;
				idx = i;
			}
		}
	}
	cout << max_v << '\n' << idx << '\n';

	return 0;
}