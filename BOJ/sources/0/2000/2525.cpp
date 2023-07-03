#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {

	freopen("2525.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	int hh, mm, add;

	cin >> hh >> mm;
	cin >> add;

	hh = ( hh + (mm + add) / 60) % 24;
	mm = (mm + add) % 60;


	cout << hh << ' ' << mm << '\n';
	return 0;
}