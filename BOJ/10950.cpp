#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int test_case, a, b;
	freopen("10950.txt", "r", stdin);
	cin >> test_case;
	for (int tc = 1; tc <= test_case; tc++) {
		cin >> a >> b;
		cout << a+b << endl;
	}
	return 0;
}