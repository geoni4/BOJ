#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;


int pow10(int n) {
	int power = 1;
	for (int i = 0; i < n; i++) {
		power = power * 10;
	}
	return power;
}

int main() {
	int a, b, total, mult, n;
	freopen("2588.txt", "r", stdin);
	cin >> a >> b;
	n = 0;
	total = 0;
	while (b != 0) {
		mult = a * (b % 10);
		cout << mult << endl;
		total += mult* pow10(n);
		b = b / 10;
		n++;
	}
	cout << total << endl;

	return 0;
}