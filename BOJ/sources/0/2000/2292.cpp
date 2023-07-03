#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int N, res=0;
	cin >> N;
	int i=0;
	for (i = 0; N > res; i++)
		res = 1 + 6*(i+1) * i / 2;
	cout << i;
	return 0;
}