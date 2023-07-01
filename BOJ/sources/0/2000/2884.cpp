#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int test_case, H, M;
	freopen("2884.txt", "r", stdin);
	cin >> test_case;
	for (int tc = 0; tc < test_case; tc++) {
		cin >> H >> M;
		if (M - 45 < 0) {
			M += 15;
			H--;
		}
		else M -= 45;
		if (H < 0)		H += 24;
		cout << H << " " << M << endl;
	}
	return 0;
}