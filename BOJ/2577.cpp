#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {

	freopen("2577.txt", "r", stdin);
	int a, b, c, tmp;
	int arr[10] = { 0, };
	cin >> a >> b >> c;
	tmp = a * b * c;
	while (tmp != 0) {
		arr[tmp % 10]++;
		tmp /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i] << '\n';
	return 0;
}