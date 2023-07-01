#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL), ios::sync_with_stdio(false);
	freopen("18108.txt", "r", stdin);

	int age ;
	cin >> age;
	age -= 543;
	cout << age << '\n';

	return 0;
}