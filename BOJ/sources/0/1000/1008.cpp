#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout<<fixed;
	cout.precision(10);
	freopen("1008.txt", "r", stdin);
	cin >> a >> b;
	cout << (double)a / (double)b << endl;
	return 0;
}