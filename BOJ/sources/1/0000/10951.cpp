#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("10951_input.txt", "r", stdin);
	int a, b;
	while (1) {
		cin >> a >> b;
		if (cin.eof()) break;
		cout << a + b << endl;
	}
	return 0;
}