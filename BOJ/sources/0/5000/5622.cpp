#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int numCheck(char ch) {
	int num;
	if (ch >= 'A' && ch <= 'C')			num = 3;
	else if (ch >= 'D' && ch <= 'F')	num = 4;
	else if (ch >= 'G' && ch <= 'I')	num = 5;
	else if (ch >= 'J' && ch <= 'L')	num = 6;
	else if (ch >= 'M' && ch <= 'O')	num = 7;
	else if (ch >= 'P' && ch <= 'S')	num = 8;
	else if (ch >= 'T' && ch <= 'V')	num = 9;
	else if (ch >= 'W' && ch <= 'Z')	num = 10;
	return num;
}


int main() {
	freopen("5622.txt", "r", stdin);
	cin.tie(0), ios::sync_with_stdio(0);
	char ch;
	int res=0;
	while (cin >> ch)
		res += numCheck(ch);
	cout << res;
	return 0;
}