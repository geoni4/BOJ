#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define MIN(A, B) A <= B ? A : B
#define MAX(A, B) A >= B ? A : B

using namespace std;

int main() {
	int n, tmp, max_v, min_v;
	freopen("10818.txt", "r", stdin);
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		if (i == 0) {
			max_v = tmp;
			min_v = tmp;
		}
		else {
			min_v = MIN(min_v, tmp);
			max_v = MAX(max_v, tmp);
		}
	}
	cout << min_v << " " << max_v << endl;

	return 0;
}