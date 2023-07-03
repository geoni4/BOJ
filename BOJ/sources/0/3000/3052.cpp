#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {

	freopen("3052.txt", "r", stdin);
	int tmp, cnt;
	int arr[42] = { 0, };
	cnt = 0;
	for (int i = 0; i < 10; i++) {
		cin >> tmp;
		if(!arr[tmp%42])cnt++;
		arr[tmp % 42]++;
	}
	cout << cnt << '\n';
	return 0;
}