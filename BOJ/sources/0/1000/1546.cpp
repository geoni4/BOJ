#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("1546.txt", "r", stdin);
	int test_case, n, tmp, max_v, sum;
	cin >> test_case;
	for (int tc = 0; tc < test_case; tc++) {
		cin >> n;
		sum = 0;
		max_v = 0;
		for (int i = 0; i < n; ++i) {
			cin >> tmp;
			sum += tmp;
			if (i == 0) max_v = tmp;
			if (max_v < tmp) max_v = tmp;
		}
		cout << ((float)sum*100.0)/((float)max_v*(float)n) << '\n';
	}
	return 0;
}