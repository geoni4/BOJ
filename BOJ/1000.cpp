#include <iostream>

using namespace std;

int x[2], y[2], r[2];

int solve() {
	if (x[0] == x[1] && y[0] == y[1] && r[0] == r[1]) return -1;
	double d, r_sum, r_diff;
	d = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2));
	r_sum = (double)(r[0] + r[1]);
	r_diff = (double)(r[0] - r[1]);
	if (d > r_sum || d < r_diff) return 0;
	if (d == r_sum || d == r_diff) return 1;
	if (d < r_sum && d>r_diff) return 2;
}


int main() {
	int test_case;
	cin >> test_case;
	for (int tc = 1; tc <= test_case;tc++) {
		for (int i = 0; i < 2; i++) {
			cin >> x[i] >> y[i] >> r[i];
		}

		cout << solve() << endl;
	}

	return 0;
}