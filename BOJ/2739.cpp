#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int N;
	freopen("2739.txt", "r", stdin);
	cin >> N;
	for (int i = 1; i < 10; i++)
		cout << N << " * " << i << " = " << N*i << endl;
	return 0;
}