#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int maxThreeNum(int a, int b, int c) {
	int max_num = a;
	max_num = max_num > b ? max_num : b;
	max_num = max_num > c ? max_num : c;

	return max_num;
}

int main() {

	freopen("2480.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(0);
	int n1, n2, n3;
	int money = 0;
	cin >> n1 >> n2 >> n3;

	if (n1 == n2 && n2 == n3) {
		money += 10000 + n1*1000;
	} else if (n1 == n2) {
		money += 1000 + n1*100;
	}
	else if (n2 == n3) {
		money += 1000 + n2 * 100;
	}
	else if (n1 == n3) {
		money += 1000 + n1 * 100;
	}
	else {
		money += 100 *maxThreeNum(n1, n2, n3);
	}
	
	cout << money << '\n';

	return 0;
}