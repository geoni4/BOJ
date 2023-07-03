#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int main() {
	freopen("10926.txt", "r", stdin);

	string tmp;
	cin >> tmp;
	tmp.append("??!");

	cout << tmp;

	return 0;
}