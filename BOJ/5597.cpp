#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	freopen("5597.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	int student;
	int attend[31] = { 0 };
	for (int i = 0; i < 28; i++) {
		cin >> student;
		attend[student] = 1;
	}
	int count = 0;
	for (int i = 1; i <= 30; i++) {
		if (attend[i] == 0) {
			cout << i << '\n';
			count++;
		}
		if (count >= 2)		break;
	}
	return 0;
}
