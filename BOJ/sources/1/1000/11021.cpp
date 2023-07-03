#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	freopen("11021.txt", "r", stdin);
	int test_case, a, b;
	cin >> test_case;
	for (int tc = 1; tc <= test_case; ++tc) {
		cin >> a >> b;
		cout << "Case #" << tc << ": "<< a + b << '\n';
	}
	return 0;
}